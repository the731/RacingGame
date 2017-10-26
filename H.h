#ifndef H_H_INCLUDED
#define H_H_INCLUDED

#include <iostream>

#include <player.h>

using namespace std;

class Human.h{
	public:
		human(int, istream& input, ostream& out);
		Player human;
		
		void getNextMove(Track&,istream& input, ostream& out);
		void attemptMove(Velocity, track& t, ostream& out);
};

#endif
