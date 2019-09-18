#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"

/* Source is from i_main.c */
#include "config.h"
#include <stdio.h>
#include "SDL.h"
#include "doomtype.h"
#include "i_system.h"
#include "m_argv.h"

#include "esp_vfs_fat.h"
#include "driver/sdspi_host.h"
#include "sdmmc_cmd.h"
#include "odroid_display.h"

// SDCARD
void install_sd_card(void);
#define SD_PIN_NUM_MISO 19
#define SD_PIN_NUM_MOSI 23
#define SD_PIN_NUM_CLK  18
#define SD_PIN_NUM_CS 22

// DISPLAY
void init_lcd_display(void);

void odroiddoommain()
{
    puts("I'm alive!");

    install_sd_card();
    init_lcd_display();

    // Normal Doom Code...
    M_FindResponseFile();

    // start doom
    D_DoomMain ();
}

void app_main()
{
    // Doomtask -> Stacksize of 25600 Bytes (25 KB), pinned to core 0
    xTaskCreatePinnedToCore(&odroiddoommain, "doom_main_task", 22480, NULL, 5, NULL, 0);
}

void install_sd_card()
{
    // Prepare SD Card IO, print file test.txt if there for test purposes
    // We try to read DOOM.WAD of the Sd Card later on
    esp_err_t ret;

    sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    host.slot = VSPI_HOST; // HSPI_HOST;
    host.max_freq_khz = SDMMC_FREQ_DEFAULT;

    sdspi_slot_config_t slot_config = SDSPI_SLOT_CONFIG_DEFAULT();
    slot_config.gpio_miso = (gpio_num_t)SD_PIN_NUM_MISO;
    slot_config.gpio_mosi = (gpio_num_t)SD_PIN_NUM_MOSI;
    slot_config.gpio_sck  = (gpio_num_t)SD_PIN_NUM_CLK;
    slot_config.gpio_cs = (gpio_num_t)SD_PIN_NUM_CS;

    esp_vfs_fat_sdmmc_mount_config_t mount_config;
    memset(&mount_config, 0, sizeof(mount_config));

    mount_config.format_if_mount_failed = false;
    mount_config.max_files = 5;

    sdmmc_card_t* card;
    ret = esp_vfs_fat_sdmmc_mount("/sdcard", &host, &slot_config, &mount_config, &card);

    if (ret == ESP_OK) {
        puts("Mounted SD Card");
    } else {
        puts("Failed to mount SD Card");
	exit(0);
    }

    // Now try to read testfile, just for debug purposes, that is
    /*
    FILE* f = fopen("/sdcard/test.txt", "r");
    if (f != NULL) {
        puts("Reading test.txt:");
        char line[64];
	fgets(line, sizeof(line), f);
	fclose(f);
	puts(line);
    } else {
        puts("File test.txt not found");
    }
    */
}

void init_lcd_display()
{
    uint16_t* buffer;

    /* odroid_display.c */
    ili9341_init();

    // 320 x 240 Pixel
    buffer = malloc(76800);

    // red rectangle, 50x50 pixel, left upper corner
    for (short x = 0; x < 50; x++) {
        for (short y = 0; y < 50; y++) {
            buffer[x*320+y] = 0xF0;
        }
    }

    ili9341_write_frame(buffer);
}
