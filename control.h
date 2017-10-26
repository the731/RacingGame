#ifndef CONTROL_H
#ifndef CONTROL_H

#include <game.h>

class Control{
	Control(const Control &Control);
	Game *game;
	public:
		Control(Game *thegame);
		-Control();
		
		 int directiongoal;
		 int directionmoving;
		 int speed;
		 int speeddone;
		 int posx;
		 int posy;
		
		//functions
		void normal();
		void left();
		void right();
		void up ();
		void down();
	
};
#endif
