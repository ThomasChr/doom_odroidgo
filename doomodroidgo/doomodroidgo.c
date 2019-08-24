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
    gpio_pad_select_gpio(LED); 
    gpio_set_direction(LED, GPIO_MODE_OUTPUT);

    while (1) {
        gpio_set_level(2, 0);
        vTaskDelay(50 / portTICK_PERIOD_MS);
        gpio_set_level(2, 1);
        vTaskDelay(50 / portTICK_PERIOD_MS);
    }
}
/*
void odroiddoommain()
{
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

    return 0;
}
*/
void app_main()
{
    // Blinktask
    xTaskCreate(&blinkmain, "doom_blink_task", configMINIMAL_STACK_SIZE, NULL, 5, NULL);

    // Doomtask
    //xTaskCreate($odroiddoommain, "doom_main_task", configMINIMAL_STACK_SIZE, NULL, 5, NULL);
}
