#include "SDL_net.h"

UDPpacket * SDLCALL SDLNet_AllocPacket(int size)
{
    put("SDLNet_AllocPacket");
    /* TODO */
    return 0;
}

const char * SDLCALL SDLNet_GetError(void)
{
    put("SDLNet_GetError");
    /* TODO */
    return 0;
}

int  SDLCALL SDLNet_Init(void)
{
    put("SDLNet_Init");
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_ResolveHost(IPaddress *address, const char *host, Uint16 port)
{
    put("SDLNet_ResolveHost");
    /* TODO */
    return 0;
}

UDPsocket SDLCALL SDLNet_UDP_Open(Uint16 port)
{
    put("SDLNet_UDP_Open");
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_UDP_RecvV(UDPsocket sock, UDPpacket **packets)
{
    put("SDLNet_UDP_RecvV");
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_UDP_SendV(UDPsocket sock, UDPpacket **packets, int npackets)
{
    put("SDLNet_UDP_SendV");
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_UDP_Send(UDPsocket sock, int channel, UDPpacket *packet)
{
    put("SDLNet_UDP_Send");
    /* TODO */
    return 0;
}

int SDLCALL SDLNet_UDP_Recv(UDPsocket sock, UDPpacket *packet)
{
    put("SDLNet_UDP_Recv");
    /* TODO */
    return 0;
}