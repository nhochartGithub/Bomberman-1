#ifndef _COLLISION_H_
#define _COLLISION_H_

#include "server.h"

int has_collision_with_wall(const SDL_Rect zone);
int has_collision_with_destructible(t_srv **srv, const SDL_Rect zone);
int has_collision_with_player(t_srv **srv, const SDL_Rect zone, int num_player);

#endif /* !_COLLISION_H_ */
