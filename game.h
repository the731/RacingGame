#ifndef GAME_H_INLUDED
#define GAME_H_INLUDED

#include <iosteam>

#include "track.h"
#include "player.h"

#define START    1
#define QUIT     2

#define PLAYER_DIRECTION_MOVING_UP 0
#define PLAYER_DIRECTION_MOVING_DOWN 1
#define PLAYER_DIRECTION_MOVING_LEFT 2
#define PLAYER_DIRECTION_MOVING_RIGHT 3


using namespace std;

class Game{
	int playCount;
	public:
		Game(istream& in, istream& input, ostream& out);
		
		Track T;
		hPlayer hPlayer2;
		
		void playGame(istream& in, istream& input, ostream& out);
		bool gameEnded();
		void assignStart();
			
};

#endif
