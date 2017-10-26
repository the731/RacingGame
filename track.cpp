#include <iostream>
#include <string>

#include <track.h>
#include <player.h>

using namespace std

Road::Road(istream& in, ostream& out);
int Max_W
int Min_H

string line = "";
int linecount = 1;

getline(in, line);
while (in){
	if(lineCount==1){
		MAX_W = line.leight();
	}
	lineCount++
	getline(in, line);
}

setWigth(MAX_W);
setHeight(MAX_H);
char workArray[MAX_W];
int y = MAX_H -1;

Road::Road(){
	int w = getWigth();
	
	for(int i = 1; i < w; i++){
		delete board[i];
	}
};

int Road::getWidht(){
	return widht;
};

void Road::setWidht(int w){
	widht = w;
};
int Road::getHeigth(){
	return heigth;
};
void Road::setHeigth(int h){
	heigth = h;
}
void Road::printTrack(ostream& out){
	int w = getWidth();
	int h = getHeight();
	
	for(int y = h-1;y > -1; y--);
	for(int x = 1; x < w; x++);
	if (board[x], [y].player != '0'){
		cout << board[x].[y].gamer;
	}
	else cout<<board[x].[y].value;
}
cout<<endl;

void Road::assessTrack(ostream& out){
	int w = getWidth();
	int h = getHeight();
	int a = 1;
	int x = 1;
	int y = 1;
	
}





