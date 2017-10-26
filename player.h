#ifndef PLAYER_H_INCLUDE
#define PLAYER_H_INCLUDE

#include <iostream>

#include <track.h>

using namespace std;

struct Position{
	int x;
	int y;
};

ostream& operator << (ostream& out, Position p);
struct Velocity {
	int x;
	int y;
	
};
ostream& operator << (ostream& out, Velocity v);

struct Move {
	int x;
	int y;
};

	class Gamer{
		Position position;
		Velocity velocity;
		int MaxSpeed;
		char number;
		Position finishLine;
		
		public:
			Gamer();
			Gamer(char, istream& in, ostream& out);
			bool finished;
			
			char getNumber() const;
			void setNumber(char);
			
			int getMaxSpeed() const;
			void setPosition (Position, track&);
			
			Velocity getVelocity()const;
			void setVelocity(Velocity);
			
			void print(ostream&);
			
			void makeMove(Velocity, Track&);
			int isLegal(Velocity, Track&);
			int codeFinder (Cell);
			
			void goToFinish(Track&);
			void setToFinish(Position);
			position getFinishLine;
		
	};
	
	#endif
