#include "SDL.h"

int SDLCALL SDL_BuildAudioCVT(SDL_AudioCVT * cvt, SDL_AudioFormat src_format, Uint8 src_channels, int src_rate, SDL_AudioFormat dst_format, Uint8 dst_channels, int dst_rate)
{
    put("SDL_BuildAudioCVT");
    /* TODO */
    return 0;
}

int SDLCALL SDL_CondSignal(SDL_cond * cond)
{
    put("SDL_CondSignal");
    /* TODO */
    return 0;
}

int SDLCALL SDL_CondWait(SDL_cond * cond, SDL_mutex * mutex)
{
    put("SDL_CondWait");
    /* TODO */
    return 0;
}

int SDLCALL SDL_ConvertAudio(SDL_AudioCVT * cvt)
{
    put("SDL_ConvertAudio");
    /* TODO */
    return 0;
}

SDL_cond *SDLCALL SDL_CreateCond(void)
{
    put("SDL_CreateCond");
    /* TODO */
    return 0;
}

SDL_mutex *SDLCALL SDL_CreateMutex(void)
{
    put("SDL_CreateMutex");
    /* TODO */
    return 0;
}

SDL_Renderer * SDLCALL SDL_CreateRenderer(SDL_Window * window, int index, Uint32 flags)
{
    put("SDL_CreateRenderer");
    /* TODO */
    return 0;
}

SDL_Surface *SDLCALL SDL_CreateRGBSurface(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
{
    put("SDL_CreateRGBSurface");
    /* TODO */
    return 0;
}

SDL_Surface *SDLCALL SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth, int pitch, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
{
    put("SDL_CreateRGBSurfaceFrom");
    /* TODO */
    return 0;
}

SDL_Texture * SDLCALL SDL_CreateTexture(SDL_Renderer * renderer, Uint32 format, int access, int w, int h)
{
    put("SDL_CreateTexture");
    /* TODO */
    return 0;
}

SDL_Texture * SDLCALL SDL_CreateTextureFromSurface(SDL_Renderer * renderer, SDL_Surface * surface)
{
    put("SDL_CreateTextureFromSurface");
    /* TODO */
    return 0;
}

SDL_Thread * SDLCALL SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data)
{
    put("SDL_CreateThread");
    /* TODO */
    return 0;
}

SDL_Window * SDLCALL SDL_CreateWindow(const char *title, int x, int y, int w, int h, Uint32 flags)
{
    put("SDL_CreateWindow");
    /* TODO */
    return 0;
}

void SDLCALL SDL_Delay(Uint32 ms)
{
    put("SDL_Delay");
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyCond(SDL_cond * cond)
{
    put("SDL_DestroyCond");
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyMutex(SDL_mutex * mutex)
{
    put("SDL_DestroyMutex");
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyRenderer(SDL_Renderer * renderer)
{
    put("SDL_DestroyRenderer");
    /* TODO */
    return;
}

void SDLCALL SDL_DestroyTexture(SDL_Texture * texture)
{
    put("SDL_DestroyTexture");
    /* TODO */
    return;
}

int SDLCALL SDL_FillRect(SDL_Surface * dst, const SDL_Rect * rect, Uint32 color)
{
    put("SDL_FillRect");
    /* TODO */
    return 0;
}

void SDLCALL SDL_free(void *mem)
{
    put("SDL_free");
    /* TODO */
    return;
}

void SDLCALL SDL_FreeSurface(SDL_Surface * surface)
{
    put("SDL_FreeSurface");
    /* TODO */
    return;
}

int SDLCALL SDL_GetCurrentDisplayMode(int displayIndex, SDL_DisplayMode * mode)
{
    put("SDL_GetCurrentDisplayMode");
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetDisplayBounds(int displayIndex, SDL_Rect * rect)
{
    put("SDL_GetDisplayBounds");
    /* TODO */
    return 0;
}

const char *SDLCALL SDL_GetError(void)
{
    put("SDL_GetError");
    /* TODO */
    return 0;
}

SDL_Keycode SDLCALL SDL_GetKeyFromScancode(SDL_Scancode scancode)
{
    put("SDL_GetKeyFromScancode");
    /* TODO */
    return 0;
}

const char *SDLCALL SDL_GetKeyName(SDL_Keycode key)
{
    put("SDL_GetKeyName");
    /* TODO */
    return 0;
}

SDL_Keymod SDLCALL SDL_GetModState(void)
{
    put("SDL_GetModState");
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetMouseState(int *x, int *y)
{
    put("SDL_GetMouseState");
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetNumVideoDisplays(void)
{
    put("SDL_GetNumVideoDisplays");
    /* TODO */
    return 0;
}

char *SDLCALL SDL_GetPrefPath(const char *org, const char *app)
{
    put("SDL_GetPrefPath");
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetRelativeMouseState(int *x, int *y)
{
    put("SDL_GetRelativeMouseState");
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetRendererInfo(SDL_Renderer * renderer, SDL_RendererInfo * info)
{
    put("SDL_GetRendererInfo");
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetRendererOutputSize(SDL_Renderer * renderer, int *w, int *h)
{
    put("SDL_GetRendererOutputSize");
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetTicks(void)
{
    put("SDL_GetTicks");
    /* TODO */
    return 0;
}

int SDLCALL SDL_GetWindowDisplayIndex(SDL_Window * window)
{
    put("SDL_GetWindowDisplayIndex");
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetWindowFlags(SDL_Window * window)
{
    put("SDL_GetWindowFlags");
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetWindowID(SDL_Window * window)
{
    put("SDL_GetWindowID");
    /* TODO */
    return 0;
}

Uint32 SDLCALL SDL_GetWindowPixelFormat(SDL_Window * window)
{
    put("SDL_GetWindowPixelFormat");
    /* TODO */
    return 0;
}

void SDLCALL SDL_GetWindowSize(SDL_Window * window, int *w, int *h)
{
    put("SDL_GetWindowSize");
    /* TODO */
    return;
}

SDL_Surface * SDLCALL SDL_GetWindowSurface(SDL_Window * window)
{
    put("SDL_GetWindowSurface");
    /* TODO */
    return 0;
}

int SDLCALL SDL_Init(Uint32 flags)
{
    put("SDL_Init");
    /* TODO */
    return 0;
}

SDL_bool SDLCALL SDL_IsTextInputActive(void)
{
    put("SDL_IsTextInputActive");
    /* TODO */
    return 0;
}

void SDLCALL SDL_JoystickClose(SDL_Joystick * joystick)
{
    put("SDL_JoystickClose");
    /* TODO */
    return;
}

int SDLCALL SDL_JoystickEventState(int state)
{
    put("SDL_JoystickEventState");
    /* TODO */
    return 0;
}

Sint16 SDLCALL SDL_JoystickGetAxis(SDL_Joystick * joystick, int axis)
{
    put("SDL_JoystickGetAxis");
    /* TODO */
    return 0;
}

Uint8 SDLCALL SDL_JoystickGetButton(SDL_Joystick * joystick, int button)
{
    put("SDL_JoystickGetButton");
    /* TODO */
    return 0;
}

SDL_JoystickGUID SDLCALL SDL_JoystickGetDeviceGUID(int device_index)
{
    put("SDL_JoystickGetDeviceGUID");
    /* TODO */
    SDL_JoystickGUID joystickguid;
    return joystickguid;
}

SDL_JoystickGUID SDLCALL SDL_JoystickGetGUIDFromString(const char *pchGUID)
{
    put("SDL_JoystickGetGUIDFromString");
    /* TODO */
    SDL_JoystickGUID joystickguid;
    return joystickguid;
}

Uint8 SDLCALL SDL_JoystickGetHat(SDL_Joystick * joystick, int hat)
{
    put("SDL_JoystickGetHat");
    /* TODO */
    return 0;
}

const char *SDLCALL SDL_JoystickName(SDL_Joystick * joystick)
{
    put("SDL_JoystickName");
    /* TODO */
    return 0;
}

int SDLCALL SDL_JoystickNumAxes(SDL_Joystick * joystick)
{
    put("SDL_JoystickNumAxes");
    /* TODO */
    return 0;
}

int SDLCALL SDL_JoystickNumHats(SDL_Joystick * joystick)
{
    put("SDL_JoystickNumHats");
    /* TODO */
    return 0;
}

SDL_Joystick *SDLCALL SDL_JoystickOpen(int device_index)
{
    put("SDL_JoystickOpen");
    /* TODO */
    return 0;
}

void SDLCALL SDL_LockAudio(void)
{
    put("SDL_LockAudio");
    /* TODO */
    return;
}

int SDLCALL SDL_LockMutex(SDL_mutex * mutex)
{
    put("SDL_LockMutex");
    /* TODO */
    return 0;
}

int SDLCALL SDL_LockSurface(SDL_Surface * surface)
{
    put("SDL_LockSurface");
    /* TODO */
    return 0;
}

int SDLCALL SDL_LowerBlit(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)
{
    put("SDL_LowerBlit");
    /* TODO */
    return 0;
}

void SDLCALL SDL_MixAudioFormat(Uint8 * dst, const Uint8 * src, SDL_AudioFormat format, Uint32 len, int volume)
{
    put("SDL_MixAudioFormat");
    /* TODO */
    return;
}

int SDLCALL SDL_NumJoysticks(void)
{
    put("SDL_NumJoysticks");
    /* TODO */
    return 0;
}

void SDLCALL SDL_PauseAudio(int pause_on)
{
    put("SDL_PauseAudio");
    /* TODO */
    return;
}

int SDLCALL SDL_PeepEvents(SDL_Event * events, int numevents, SDL_eventaction action, Uint32 minType, Uint32 maxType)
{
    put("SDL_PeepEvents");
    /* TODO */
    return 0;
}

SDL_bool SDLCALL SDL_PixelFormatEnumToMasks(Uint32 format, int *bpp, Uint32 * Rmask, Uint32 * Gmask, Uint32 * Bmask, Uint32 * Amask)
{
    put("SDL_PixelFormatEnumToMasks");
    /* TODO */
    return 0;
}

int SDLCALL SDL_PollEvent(SDL_Event * event)
{
    put("SDL_PollEvent");
    /* TODO */
    return 0;
}

void SDLCALL SDL_PumpEvents(void)
{
    put("SDL_PumpEvents");
    /* TODO */
    return;
}

void SDLCALL SDL_Quit(void)
{
    put("SDL_Quit");
    /* TODO */
    return;
}

void SDLCALL SDL_QuitSubSystem(Uint32 flags)
{
    put("SDL_QuitSubSystem");
    /* TODO */
    return;
}

int SDLCALL SDL_RenderClear(SDL_Renderer * renderer)
{
    put("SDL_RenderClear");
    /* TODO */
    return 0;
}

int SDLCALL SDL_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_Rect * dstrect)
{
    put("SDL_RenderCopy");
    /* TODO */
    return 0;
}

void SDLCALL SDL_RenderPresent(SDL_Renderer * renderer)
{
    put("SDL_RenderPresent");
    /* TODO */
    return;
}

int SDLCALL SDL_RenderSetIntegerScale(SDL_Renderer * renderer, SDL_bool enable)
{
    put("SDL_RenderSetIntegerScale");
    /* TODO */
    return 0;
}

int SDLCALL SDL_RenderSetLogicalSize(SDL_Renderer * renderer, int w, int h)
{
    put("SDL_RenderSetLogicalSize");
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetPaletteColors(SDL_Palette * palette, const SDL_Color * colors, int firstcolor, int ncolors)
{
    put("SDL_SetPaletteColors");
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetRelativeMouseMode(SDL_bool enabled)
{
    put("SDL_SetRelativeMouseMode");
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetRenderDrawColor(SDL_Renderer * renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
    put("SDL_SetRenderDrawColor");
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetRenderTarget(SDL_Renderer *renderer, SDL_Texture *texture)
{
    put("SDL_SetRenderTarget");
    /* TODO */
    return 0;
}

int SDLCALL SDL_SetWindowFullscreen(SDL_Window * window, Uint32 flags)
{
    put("SDL_SetWindowFullscreen");
    /* TODO */
    return 0;
}

void SDLCALL SDL_SetWindowIcon(SDL_Window * window, SDL_Surface * icon)
{
    put("SDL_SetWindowIcon");
    /* TODO */
    return;
}

void SDLCALL SDL_SetWindowMinimumSize(SDL_Window * window, int min_w, int min_h)
{
    put("SDL_SetWindowMinimumSize");
    /* TODO */
    return;
}

void SDLCALL SDL_SetWindowSize(SDL_Window * window, int w, int h)
{
    put("SDL_SetWindowSize");
    /* TODO */
    return;
}

void SDLCALL SDL_SetWindowTitle(SDL_Window * window, const char *title)
{
    put("SDL_SetWindowTitle");
    /* TODO */
    return;
}

int SDLCALL SDL_ShowSimpleMessageBox(Uint32 flags, const char *title, const char *message, SDL_Window *window)
{
    put("SDL_ShowSimpleMessageBox");
    /* TODO */
    return 0;
}

void SDLCALL SDL_StartTextInput(void)
{
    put("SDL_StartTextInput");
    /* TODO */
    return;
}

void SDLCALL SDL_StopTextInput(void)
{
    put("SDL_StopTextInput");
    /* TODO */
    return;
}

void SDLCALL SDL_UnlockAudio(void)
{
    put("SDL_UnlockAudio");
    /* TODO */
    return;
}

int SDLCALL SDL_UnlockMutex(SDL_mutex * mutex)
{
    put("SDL_UnlockMutex");
    /* TODO */
    return 0;
}

void SDLCALL SDL_UnlockSurface(SDL_Surface * surface)
{
    put("SDL_UnlockSurface");
    /* TODO */
    return;
}

int SDLCALL SDL_UpdateTexture(SDL_Texture * texture, const SDL_Rect * rect, const void *pixels, int pitch)
{
    put("SDL_UpdateTexture");
    /* TODO */
    return 0;
}

int SDLCALL SDL_UpdateWindowSurface(SDL_Window * window)
{
    put("SDL_UpdateWindowSurface");
    /* TODO */
    return 0;
}

int SDLCALL SDL_UpdateWindowSurfaceRects(SDL_Window * window, const SDL_Rect * rects, int numrects)
{
    put("SDL_UpdateWindowSurfaceRects");
    /* TODO */
    return 0;
}

int SDLCALL SDL_UpperBlit(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)
{
    put("SDL_UpperBlit");
    /* TODO */
    return 0;
}

int SDLCALL SDL_WaitEvent(SDL_Event * event)
{
    put("SDL_WaitEvent");
    /* TODO */
    return 0;
}

void SDLCALL SDL_WaitThread(SDL_Thread * thread, int *status)
{
    put("SDL_WaitThread");
    /* TODO */
    return;
}

void SDLCALL SDL_WarpMouseInWindow(SDL_Window * window, int x, int y)
{
    put("SDL_WarpMouseInWindow");
    /* TODO */
    return;
}

SDL_bool SDLCALL SDL_SetHint(const char *name, const char *value)
{
    put("SDL_SetHint");
    /* TODO */
    return 0;
}
