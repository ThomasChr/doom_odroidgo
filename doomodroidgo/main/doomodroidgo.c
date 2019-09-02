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
    // Doomtask -> Stacksize of 25600 Bytes (25 KB), pinned to core 0
    xTaskCreatePinnedToCore(&odroiddoommain, "doom_main_task", 22480, NULL, 5, NULL, 0);
}

