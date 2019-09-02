#include "SDL_mixer.h"

int SDLCALL Mix_HaltMusic(void)
{
    puts("Mix_HaltMusic");
    /* TODO */
    return 0;
}

void SDLCALL Mix_CloseAudio(void)
{
    puts("Mix_CloseAudio");
    /* TODO */
    return;
}

int SDLCALL Mix_QuerySpec(int *frequency,Uint16 *format,int *channels)
{
    puts("Mix_QuerySpec");
    /* TODO */
    return 0;
}

int SDLCALL Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize)
{
    puts("Mix_OpenAudio");
    /* TODO */
    return 0;
}

int SDLCALL Mix_Init(int flags)
{
    puts("Mix_Init");
    /* TODO */
    return 0;
}

int SDLCALL Mix_RegisterEffect(int chan, Mix_EffectFunc_t f, Mix_EffectDone_t d, void *arg)
{
    puts("Mix_RegisterEffect");
    /* TODO */
    return 0;
}

int SDLCALL Mix_VolumeMusic(int volume)
{
    puts("Mix_VolumeMusic");
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayMusic(Mix_Music *music, int loops)
{
    puts("Mix_PlayMusic");
    /* TODO */
    return 0;
}

void SDLCALL Mix_PauseMusic(void)
{
    puts("Mix_PauseMusic");
    /* TODO */
    return;
}

void SDLCALL Mix_ResumeMusic(void)
{
    puts("Mix_ResumeMusic");
    /* TODO */
    return;
}

void SDLCALL Mix_FreeMusic(Mix_Music *music)
{
    puts("Mix_FreeMusic");
    /* TODO */
    return;
}

Mix_Music * SDLCALL Mix_LoadMUS(const char *file)
{
    puts("Mix_LoadMUS");
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayingMusic(void)
{
    puts("Mix_PlayingMusic");
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetMusicPosition(double position)
{
    puts("Mix_SetMusicPosition");
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetMusicCMD(const char *command)
{
    puts("Mix_SetMusicCMD");
    /* TODO */
    return 0;
}

int SDLCALL Mix_HaltChannel(int channel)
{
    puts("Mix_HaltChannel");
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetPanning(int channel, Uint8 left, Uint8 right)
{
    puts("Mix_SetPanning");
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayChannelTimed(int channel, Mix_Chunk *chunk, int loops, int ticks)
{
    puts("Mix_PlayChannelTimed");
    /* TODO */
    return 0;
}

int SDLCALL Mix_Playing(int channel)
{
    puts("Mix_Playing");
    /* TODO */
    return 0;
}

int SDLCALL Mix_AllocateChannels(int numchans)
{
    puts("Mix_AllocateChannels");
    /* TODO */
    return 0;
}

void SDLCALL Mix_HookMusic(void (SDLCALL *mix_func)(void *udata, Uint8 *stream, int len), void *arg)
{
    puts("Mix_HookMusic");
    /* TODO */
    return;
}

void SDLCALL Mix_SetPostMix(void (SDLCALL *mix_func)(void *udata, Uint8 *stream, int len), void *arg)
{
    puts("Mix_SetPostMix");
    /* TODO */
    return;
}