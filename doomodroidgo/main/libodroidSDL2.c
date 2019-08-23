#include "SDL.h"
#include "SDL_net.h"
#include "SDL_mixer.h"

int SDLCALL SDL_BuildAudioCVT(SDL_AudioCVT * cvt, SDL_AudioFormat src_format, Uint8 src_channels, int src_rate, SDL_AudioFormat dst_format, Uint8 dst_channels, int dst_rate)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_CondSignal(SDL_cond * cond)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_CondWait(SDL_cond * cond, SDL_mutex * mutex)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_ConvertAudio(SDL_AudioCVT * cvt)
{
    /* TODO */
    return 0;
}

SDL_cond *SDLCALL SDL_CreateCond(void)
{
    /* TODO */
    return 0;
}

SDL_mutex *SDLCALL SDL_CreateMutex(void)
{
    /* TODO */
    return 0;
}

SDL_Renderer * SDLCALL SDL_CreateRenderer(SDL_Window * window, int index, Uint32 flags)
{
    /* TODO */
    return 0;
}

SDL_Surface *SDLCALL SDL_CreateRGBSurface(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
{
    /* TODO */
    return 0;
}

SDL_Surface *SDLCALL SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth, int pitch, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
{
    /* TODO */
    return 0;
}

SDL_Texture * SDLCALL SDL_CreateTexture(SDL_Renderer * renderer, Uint32 format, int access, int w, int h)
{
    /* TODO */
    return 0;
}

SDL_Texture * SDLCALL SDL_CreateTextureFromSurface(SDL_Renderer * renderer, SDL_Surface * surface)
{
    /* TODO */
    return 0;
}

SDL_Thread * SDLCALL SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data)
{
    /* TODO */
    return 0;
}

SDL_Window * SDLCALL SDL_CreateWindow(const char *title, int x, int y, int w, int h, Uint32 flags)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_Delay(Uint32 ms)
{
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyCond(SDL_cond * cond)
{
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyMutex(SDL_mutex * mutex)
{
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyRenderer(SDL_Renderer * renderer)
{
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyTexture(SDL_Texture * texture)
{
    /* TODO */
    return;
}

int SDLCALL SDL_FillRect (SDL_Surface * dst, const SDL_Rect * rect, Uint32 color)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_free(void *mem)
{
    /* TODO */
    return;
}

void SDLCALL SDL_FreeSurface(SDL_Surface * surface)
{
    /* TODO */
    return;
}

int SDLCALL SDL_GetCurrentDisplayMode(int displayIndex, SDL_DisplayMode * mode)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetDisplayBounds(int displayIndex, SDL_Rect * rect)
{
    /* TODO */
    return 0;
}

const char *SDLCALL SDL_GetError(void)
{
    /* TODO */
    return 0;
}

SDL_Keycode SDLCALL SDL_GetKeyFromScancode(SDL_Scancode scancode)
{
    /* TODO */
    return 0;
}

const char *SDLCALL SDL_GetKeyName(SDL_Keycode key)
{
    /* TODO */
    return 0;
}

SDL_Keymod SDLCALL SDL_GetModState(void)
{
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetMouseState(int *x, int *y)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetNumVideoDisplays(void)
{
    /* TODO */
    return 0;
}

char *SDLCALL SDL_GetPrefPath(const char *org, const char *app)
{
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetRelativeMouseState(int *x, int *y)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetRendererInfo(SDL_Renderer * renderer, SDL_RendererInfo * info)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetRendererOutputSize(SDL_Renderer * renderer, int *w, int *h)
{
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetTicks(void)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetWindowDisplayIndex(SDL_Window * window)
{
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetWindowFlags(SDL_Window * window)
{
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetWindowID(SDL_Window * window)
{
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetWindowPixelFormat(SDL_Window * window)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_GetWindowSize(SDL_Window * window, int *w, int *h)
{
    /* TODO */
    return;
}

SDL_Surface * SDLCALL SDL_GetWindowSurface(SDL_Window * window)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_Init(Uint32 flags)
{
    /* TODO */
    return 0;
}

SDL_bool SDLCALL SDL_IsTextInputActive(void)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_JoystickClose(SDL_Joystick * joystick)
{
    /* TODO */
    return;
}

int SDLCALL SDL_JoystickEventState(int state)
{
    /* TODO */
    return 0;
}

Sint16 SDLCALL SDL_JoystickGetAxis(SDL_Joystick * joystick, int axis)
{
    /* TODO */
    return 0;
}

Uint8 SDLCALL SDL_JoystickGetButton(SDL_Joystick * joystick, int button)
{
    /* TODO */
    return 0;
}

SDL_JoystickGUID SDLCALL SDL_JoystickGetDeviceGUID(int device_index)
{
    /* TODO */
    SDL_JoystickGUID joystickguid;
    return joystickguid;
}

SDL_JoystickGUID SDLCALL SDL_JoystickGetGUIDFromString(const char *pchGUID)
{
    /* TODO */
    SDL_JoystickGUID joystickguid;
    return joystickguid;
}

Uint8 SDLCALL SDL_JoystickGetHat(SDL_Joystick * joystick, int hat)
{
    /* TODO */
    return 0;
}

const char *SDLCALL SDL_JoystickName(SDL_Joystick * joystick)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_JoystickNumAxes(SDL_Joystick * joystick)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_JoystickNumHats(SDL_Joystick * joystick)
{
    /* TODO */
    return 0;
}

SDL_Joystick *SDLCALL SDL_JoystickOpen(int device_index)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_LockAudio(void)
{
    /* TODO */
    return;
}

int SDLCALL SDL_LockMutex(SDL_mutex * mutex)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_LockSurface(SDL_Surface * surface)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_LowerBlit (SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_MixAudioFormat(Uint8 * dst, const Uint8 * src, SDL_AudioFormat format, Uint32 len, int volume)
{
    /* TODO */
    return;
}

UDPpacket * SDLCALL SDLNet_AllocPacket(int size)
{
    /* TODO */
    return 0;
}

const char * SDLCALL SDLNet_GetError(void)
{
    /* TODO */
    return 0;
}

int  SDLCALL SDLNet_Init(void)
{
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_ResolveHost(IPaddress *address, const char *host, Uint16 port)
{
    /* TODO */
    return 0;
}

UDPsocket SDLCALL SDLNet_UDP_Open(Uint16 port)
{
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_UDP_RecvV(UDPsocket sock, UDPpacket **packets)
{
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_UDP_SendV(UDPsocket sock, UDPpacket **packets, int npackets)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_NumJoysticks(void)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_PauseAudio(int pause_on)
{
    /* TODO */
    return;
}

int SDLCALL SDL_PeepEvents(SDL_Event * events, int numevents, SDL_eventaction action, Uint32 minType, Uint32 maxType)
{
    /* TODO */
    return 0;
}

SDL_bool SDLCALL SDL_PixelFormatEnumToMasks(Uint32 format, int *bpp, Uint32 * Rmask, Uint32 * Gmask, Uint32 * Bmask, Uint32 * Amask)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_PollEvent(SDL_Event * event)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_PumpEvents(void)
{
    /* TODO */
    return;
}

void SDLCALL SDL_Quit(void)
{
    /* TODO */
    return;
}

void SDLCALL SDL_QuitSubSystem(Uint32 flags)
{
    /* TODO */
    return;
}

int SDLCALL SDL_RenderClear(SDL_Renderer * renderer)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_Rect * dstrect)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_RenderPresent(SDL_Renderer * renderer)
{
    /* TODO */
    return;
}

int SDLCALL SDL_RenderSetIntegerScale(SDL_Renderer * renderer, SDL_bool enable)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_RenderSetLogicalSize(SDL_Renderer * renderer, int w, int h)
{
    /* TODO */
    return 0;
}

SDL_bool SDLCALL SDL_SetHintWithPriority(const char *name, const char *value, SDL_HintPriority priority)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetPaletteColors(SDL_Palette * palette, const SDL_Color * colors, int firstcolor, int ncolors)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetRelativeMouseMode(SDL_bool enabled)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetRenderDrawColor(SDL_Renderer * renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetRenderTarget(SDL_Renderer *renderer, SDL_Texture *texture)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetWindowFullscreen(SDL_Window * window, Uint32 flags)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_SetWindowIcon(SDL_Window * window, SDL_Surface * icon)
{
    /* TODO */
    return;
}

void SDLCALL SDL_SetWindowMinimumSize(SDL_Window * window, int min_w, int min_h)
{
    /* TODO */
    return;
}

void SDLCALL SDL_SetWindowSize(SDL_Window * window, int w, int h)
{
    /* TODO */
    return;
}

void SDLCALL SDL_SetWindowTitle(SDL_Window * window, const char *title)
{
    /* TODO */
    return;
}

int SDLCALL SDL_ShowSimpleMessageBox(Uint32 flags, const char *title, const char *message, SDL_Window *window)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_StartTextInput(void)
{
    /* TODO */
    return;
}

void SDLCALL SDL_StopTextInput(void)
{
    /* TODO */
    return;
}

void SDLCALL SDL_UnlockAudio(void)
{
    /* TODO */
    return;
}

int SDLCALL SDL_UnlockMutex(SDL_mutex * mutex)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_UnlockSurface(SDL_Surface * surface)
{
    /* TODO */
    return;
}

int SDLCALL SDL_UpdateTexture(SDL_Texture * texture, const SDL_Rect * rect, const void *pixels, int pitch)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_UpdateWindowSurface(SDL_Window * window)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_UpdateWindowSurfaceRects(SDL_Window * window, const SDL_Rect * rects, int numrects)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_UpperBlit(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)
{
    /* TODO */
    return 0;
}

int SDLCALL SDL_WaitEvent(SDL_Event * event)
{
    /* TODO */
    return 0;
}

void SDLCALL SDL_WaitThread(SDL_Thread * thread, int *status)
{
    /* TODO */
    return;
}

void SDLCALL SDL_WarpMouseInWindow(SDL_Window * window, int x, int y)
{
    /* TODO */
    return;
}

int SDLCALL SDLNet_UDP_Send(UDPsocket sock, int channel, UDPpacket *packet)
{
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_UDP_Recv(UDPsocket sock, UDPpacket *packet)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_HaltMusic(void)
{
    /* TODO */
    return 0;
}

void SDLCALL Mix_CloseAudio(void)
{
    /* TODO */
    return;
}

int SDLCALL Mix_QuerySpec(int *frequency,Uint16 *format,int *channels)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_Init(int flags)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_RegisterEffect(int chan, Mix_EffectFunc_t f, Mix_EffectDone_t d, void *arg)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_VolumeMusic(int volume)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayMusic(Mix_Music *music, int loops)
{
    /* TODO */
    return 0;
}

void SDLCALL Mix_PauseMusic(void)
{
    /* TODO */
    return;
}

void SDLCALL Mix_ResumeMusic(void)
{
    /* TODO */
    return;
}

void SDLCALL Mix_FreeMusic(Mix_Music *music)
{
    /* TODO */
    return;
}

Mix_Music * SDLCALL Mix_LoadMUS(const char *file)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayingMusic(void)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetMusicPosition(double position)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetMusicCMD(const char *command)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_HaltChannel(int channel)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_SetPanning(int channel, Uint8 left, Uint8 right)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_PlayChannelTimed(int channel, Mix_Chunk *chunk, int loops, int ticks)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_Playing(int channel)
{
    /* TODO */
    return 0;
}

int SDLCALL Mix_AllocateChannels(int numchans)
{
    /* TODO */
    return 0;
}

void SDLCALL Mix_HookMusic(void (SDLCALL *mix_func)(void *udata, Uint8 *stream, int len), void *arg)
{
    /* TODO */
    return;
}

void SDLCALL Mix_SetPostMix(void (SDLCALL *mix_func)(void *udata, Uint8 *stream, int len), void *arg)
{
    /* TODO */
    return;
}

SDL_bool SDLCALL SDL_SetHintWithPriority(const char *name, const char *value, SDL_HintPriority priority)
{
    /* TODO */
    return 0;
}
