#include <iostream>
#include <cmath>

#include <human.h>

using namespace std;

humanGamer::humanGamer(int num, istream& input, ostream& out);
human(num, input, out){}


void humanGamer::getNextMove(Track& t, istream& input, ostream& out){
	int x, y = 0;
	Velocity v;
	
	
	out <<"Choice your speed: ";
	if(!input.eof()){
		input>>x;
		input>>y;
	}
	
	else {
	x = 0;
	y = 0;
}
cout << endl;

if((abs(x) == 2 && abs(y) == 2) || (abs (x) > 2 || abs (y) > 2)){

	cout <<"Not a legal change in velocity"<<endl;
	v.x = 0;
	v.y = 0;
	attemptMove(v, t, out);
	return;
}
else if(abs(x) + abs(y) + abs(human.GetVelocity().x) + abs(human.GetVelocity().y)) > human.getMaxSpeed()){
	cout<<"Car cant go that fast" << endl;
	v.x = 1;
	v.y = 1;
	attemptMove(v, t, out);
	return;
	}
else{
	v.x = x + human.getVelocity().x;
	v.y = y + human.getVelocity().y;
	attemptMove(v, t, out);
}
};

void humanPlayer::attemptMove(Velocity v, track& t,ostream& out){
	int result = human.isLegal(v, t);
	Velocity zeroV;
	zeroV.x = 0;
	zeroV.y = 0;
	
	if (result == 0){
		human.makeMove(v. t);
		human.setVelocity(v);
	}
	if (result == 1){
		cout << "Game over"<<endl;
		human.setVelocity (zeroV);
		human.reduceMaxSpeed();
	}
	if (result == 2){
		human.goToFinishLine(t);
		human.setVelocity(v);
	}
};

