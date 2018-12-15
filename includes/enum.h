#ifndef _ENUM_H_
#define _ENUM_H_

typedef enum    texture_type
  {
    bomb = 0,
    wall = 1,
    ground = 2,
    ground_shadowed = 3,
    pannel = 4,
    timer = 5,
  }             texture_type;

typedef enum    bomb_texture_type
  {
    bomb_s = 0,
    bomb_m = 1,
    bomb_l = 2
  }             bomb_texture_type;

enum	bomber_sprite_dir
  {
    bomber_d = 0,
    bomber_l = 1,
    bomber_r = 2,
    bomber_u = 3,
    die = 4,
    not_move = 5,
    move_r = 6,
    transit_move = 7,
    move_l = 8
  };

enum		MAP_GRID
  {
    FREE_SLOT = 0,
    WALL = 1,
    FIRE = 2,
  };

enum	CLIENT_REQUEST_STATUS
  {
    BAD_SEND,
    SUCCESS_SEND,
    BAD_RECEIVE,
    SUCCESS_RECEIVE,
    BAD_FREE,
    SUCCESS_FREE,
  };

enum	COMMAND_REQUEST
  {
    START_GAME = 1,
    PLACE_BOMB = 2,
  };

#endif /* !_ENUM_H_ */
