#include "game.h"
#include "control.h"

Control::Control(Game *thegame):
	directiongoal(PLAYER_DIRECTION_NORMAL),
	directionmoving(PLAYER_DIRECTION_MOVING_UP),
	speed(0),
	speeddone(0),
	posx(0),
	posy(0),
	game(thegame)
	{
	}
	Control::Control()
	{
	}
void Control::normal(){
	directiongoal = PLAYER_DIRECTION_NORMAL;
}

void Control::left(){
	directiongoal = PLAYER_DIRECTION_LEFT;
}

void Control::right(){
	directiongoal = PLAYER_DIRECTION_RIGHT;
}

void Control::move(int mX, in mY){
	if (mX < posx)
	directionmoving = PLAYER_DIRECTION_MOVING_LEFT;
	if (mX > posx)
	directionmoving = PLAYER_DIRECTION_MOVING_RIGHT;
	if (mY < posy)
	directionmoving = PLAYER_DIRECTION_MOVING_UP;
	if (mY > posy)
	directionmoving = PLAYER_DIRECTION_MOVING_DOWN;
	posx = mX;
	posy = mY;
}

void Control::moveonmap(int mX, int mY, int direction){
	posx = game->bound_X_0 + (mX * game->block_width) + (game->block_width / 2);
	posy = game->bound_Y_0 + (mY * game->block_height) + (game->block_height / 2);
	directonmoving = direction;
}
