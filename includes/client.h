#ifndef _CLIENT_H_
#define _CLIEN_H_

#include "request.h"

void 	client_loop(t_sdl *sdl, int fd, t_player_request *cr);
void	init_client(t_sdl *sdl);
char	*enter_addr(t_sdl *sdl);
int	host_connect();
int	client_connect();
#endif
