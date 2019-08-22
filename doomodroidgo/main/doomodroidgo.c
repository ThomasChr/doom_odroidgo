#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#define LED 2

void doommain(void *pvParameter)
{
    // make LED Output
    gpio_pad_select_gpio(LED); 
    gpio_set_direction(LED, GPIO_MODE_OUTPUT);

    while (1) {
        gpio_set_level(LED, 0);
        vTaskDelay(50 / portTICK_PERIOD_MS);
        gpio_set_level(LED, 1);
        vTaskDelay(50 / portTICK_PERIOD_MS);
    }
}

void app_main()
{
    xTaskCreate(&doommain, "doom_main_task",  
    configMINIMAL_STACK_SIZE, NULL, 5, NULL);
}
