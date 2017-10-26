#ifndef TRACK_H_INCLUDED
#define TRACK_H_INCLUDED

#include <iostream>

using namespace std;

struct Cell {
	char value;
	char gamer;
	int distanceFromrFinish;
};

class Track{
	int width;
	int height;
	void assessTrack(ostream& out);
public:
	Track(istream& in, ostream& out);
	-Track();
	int getWidth();
	void setWidth(int);
	int getHeight();
	void setHeight();
	
	void printTrack(ostream& out);
	
};
#endif	
