#include <stdlib.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <pthread.h>
#include "base_map.h"

void *blue_bomber_sprite(void *arg)
{
  t_data *data = (t_data*)arg;
  data->players[0].bomber_sprites[bomber_d][not_move] = init_rect(70, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_d][move_l] = init_rect(52, 120, 16, 24);
    data->players[0].bomber_sprites[bomber_d][transit_move] = init_rect(70, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_d][move_r] = init_rect(88, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_l][not_move] = init_rect(124, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_l][move_l] = init_rect(106, 120, 16, 24);
    data->players[0].bomber_sprites[bomber_l][transit_move] = init_rect(124, 120, 16, 24);

  data->players[0].bomber_sprites[bomber_l][move_r] = init_rect(143, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_r][not_move] = init_rect(179, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_r][move_l] = init_rect(160, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_r][transit_move] = init_rect(179, 120, 16, 24);

  data->players[0].bomber_sprites[bomber_r][move_r] = init_rect(197, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_u][not_move] = init_rect(237, 120, 16, 24);
  data->players[0].bomber_sprites[bomber_u][move_l] = init_rect(219, 120, 16, 24);
    data->players[0].bomber_sprites[bomber_u][transit_move] = init_rect(237, 120, 16, 24);

  data->players[0].bomber_sprites[bomber_u][move_r] = init_rect(255, 120, 16, 24);
   data->players[0].bomber_sprites[die][0] = init_rect(345, 120, 16, 24);
   data->players[0].bomber_sprites[die][1] = init_rect(361, 120, 16, 24);
   data->players[0].bomber_sprites[die][2] = init_rect(395, 120, 16, 24);
  return NULL;
}
