#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

/* Source is from i_main.c */
#include "config.h"
#include <stdio.h>
#include "SDL.h"
#include "doomtype.h"
#include "i_system.h"
#include "m_argv.h"

void blinkmain(void *pvParameter)
{
    // make LED Output
    gpio_pad_select_gpio(2);
    gpio_set_direction(2, GPIO_MODE_OUTPUT);

    while (1) {
        gpio_set_level(2, 0);
        vTaskDelay(50 / portTICK_PERIOD_MS);
        gpio_set_level(2, 1);
        vTaskDelay(50 / portTICK_PERIOD_MS);
    }
}

void odroiddoommain()
{
    puts("I'm alive");
    //!
    // Print the program version and exit.
    //
    if (M_ParmExists("-version") || M_ParmExists("--version")) {
        puts(PACKAGE_STRING);
        exit(0);
    }

    M_FindResponseFile();

    #ifdef SDL_HINT_NO_SIGNAL_HANDLERS
    SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
    #endif

    // start doom
    D_DoomMain ();
}

void app_main()
{
    // Blinktask
    xTaskCreate(&blinkmain, "doom_blink_task", configMINIMAL_STACK_SIZE, NULL, 5, NULL);

    // Doomtask -> Stacksize of 512 Words - which means 2048 Bytes
    xTaskCreate(&odroiddoommain, "doom_main_task", 512, NULL, 5, NULL);
}

