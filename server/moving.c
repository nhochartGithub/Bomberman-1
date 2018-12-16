/*
** moving.c for Project-Master in /home/enach/CLionProjects/Bomberman/bm_test/server
**
** Made by hochar_n
** Login   hochar_n@etna-altenance.net
**
** Started on  Sun Jul  1 17:39:23 2018 hochar_n
** Last update Mon Jul  2 21:01:32 2018 hochar_n
*/

#include <stdio.h>
#include "server.h"
#include "my_put.h"
#include "request.h"
#include "game_info.h"

void	move_player(
		    t_game_info *game_info,
		    t_player_request *player_request,
		    int num_player
		    )
{
  printf("\nmoveplayer, check if player is in map\n");
  if (game_info->players[num_player].x_pos < 0 || game_info->players[num_player].y_pos < 0
      || game_info->players[num_player].x_pos > 720 || game_info->players[num_player].y_pos > 624)
    return;

  /*
  * Pour le moment on check pas les collisions on veut juste bouger
  */
  // printf("\nmoveplayer check_collision call\n");
  // if (check_collision(map_pointer, player_request) == 0)
  //   return;

  printf("\ncheck if player is connected\n");
  if (game_info->players[num_player].connected == 0)
	  return;


  switch (player_request->command)
  {
    case MOVE_UP:
      game_info->players[num_player].y_pos -= 6;
      printf("\nPLAYER MOVED UP, playe_num:%d, command:%d, y_pos: %d", num_player, player_request->command, game_info->players[num_player].y_pos);
      break;

    case MOVE_DOWN:
      game_info->players[num_player].y_pos += 6;
      printf("\nPLAYER MOVED DOWN, playe_num:%d, command:%d, y_pos: %d", num_player, player_request->command, game_info->players[num_player].y_pos);
      break;

    case MOVE_RIGHT:
      game_info->players[num_player].x_pos += 6;
      printf("\nPLAYER MOVED RIGHT, playe_num:%d, command:%d, x_pos: %d", num_player, player_request->command, game_info->players[num_player].x_pos);
      break;

    case MOVE_LEFT:
      game_info->players[num_player].x_pos -= 6;
      printf("\nPLAYER MOVED LEFT, playe_num:%d, command:%d, x_pos: %d", num_player, player_request->command, game_info->players[num_player].x_pos);
      break;

    default:
      break;
  }

  set_game_info(game_info);
}

// int	check_collision(
// 			int** map_pointer,
// 			t_player_request *player_request
// 			)
// {
//   int	i;

//   printf("\ncheck_collision first iteration throught players\n");
//   for (i = (player_request->x_pos-3); i < (player_request->x_pos+3); ++i) {
//     printf("\nif i < 0\n");
//     if (i < 0)
//       continue;

//     printf("\nchek_collision check if WALL to map_pointer[playerrequestX][playerrequestY], if true: return\n");
//     // segfault ici
//     if (map_pointer[player_request->x_pos][player_request->y_pos] == WALL)
//       {
// 	printf("\nis Wall, return\n");
// 	return 0;
//       }
//   }
//   printf("\nsecond iteration of check_collision\n");
//   for (i = (player_request->y_pos-3); i < (player_request->y_pos+3); ++i) {
//     printf("\nif i < 0\n");
//     if (i < 0)
//       continue;
//     printf("\nchek_collision check if WALL to map_pointer[playerrequestX][playerrequestY], if true: return\n");
//     if (map_pointer[player_request->x_pos][player_request->y_pos] == WALL)
//       {
// 	printf("\nis Wall, return\n");
// 	return 0;
//       }
//   }
//   printf("\nBoth iterations done, check_collision done\n");
//   return 1;
// }