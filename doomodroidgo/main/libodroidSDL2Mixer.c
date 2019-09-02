#include "SDL_mixer.h"

int SDLCALL Mix_HaltMusic(void)
{
    put("Mix_HaltMusic");
    /* TODO */
    return 0;
}

void SDLCALL Mix_CloseAudio(void)
{
    put("Mix_CloseAudio");
    /* TODO */
    return;
}

int SDLCALL Mix_QuerySpec(int *frequency,Uint16 *format,int *channels)
{
    put("Mix_QuerySpec");
    /* TODO */
    return 0;
}

int SDLCALL Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize)
{
    put("Mix_OpenAudio");
    /* TODO */
    return 0;
}

int SDLCALL Mix_Init(int flags)
{
    put("Mix_Init");
    /* TODO */
    return 0;
}

int SDLCALL Mix_RegisterEffect(int chan, Mix_EffectFunc_t f, Mix_EffectDone_t d, void *arg)
{
    put("Mix_RegisterEffect");
    /* TODO */
    return 0;
}

int SDLCALL Mix_VolumeMusic(int volume)
{
    put("Mix_VolumeMusic");
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayMusic(Mix_Music *music, int loops)
{
    put("Mix_PlayMusic");
    /* TODO */
    return 0;
}

void SDLCALL Mix_PauseMusic(void)
{
    put("Mix_PauseMusic");
    /* TODO */
    return;
}

void SDLCALL Mix_ResumeMusic(void)
{
    put("Mix_ResumeMusic");
    /* TODO */
    return;
}

void SDLCALL Mix_FreeMusic(Mix_Music *music)
{
    put("Mix_FreeMusic");
    /* TODO */
    return;
}

Mix_Music * SDLCALL Mix_LoadMUS(const char *file)
{
    put("Mix_LoadMUS");
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayingMusic(void)
{
    put("Mix_PlayingMusic");
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetMusicPosition(double position)
{
    put("Mix_SetMusicPosition");
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetMusicCMD(const char *command)
{
    put("Mix_SetMusicCMD");
    /* TODO */
    return 0;
}

int SDLCALL Mix_HaltChannel(int channel)
{
    put("Mix_HaltChannel");
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetPanning(int channel, Uint8 left, Uint8 right)
{
    put("Mix_SetPanning");
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayChannelTimed(int channel, Mix_Chunk *chunk, int loops, int ticks)
{
    put("Mix_PlayChannelTimed");
    /* TODO */
    return 0;
}

int SDLCALL Mix_Playing(int channel)
{
    put("Mix_Playing");
    /* TODO */
    return 0;
}

int SDLCALL Mix_AllocateChannels(int numchans)
{
    put("Mix_AllocateChannels");
    /* TODO */
    return 0;
}

void SDLCALL Mix_HookMusic(void (SDLCALL *mix_func)(void *udata, Uint8 *stream, int len), void *arg)
{
    put("Mix_HookMusic");
    /* TODO */
    return;
}

void SDLCALL Mix_SetPostMix(void (SDLCALL *mix_func)(void *udata, Uint8 *stream, int len), void *arg)
{
    put("Mix_SetPostMix");
    /* TODO */
    return;
}