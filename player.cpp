#include <iostream>

#include <player.h>

using namespace std;

inline
ostream& operator << (ostream& Player p){
	p.print(out);
	return out;
}

inline ostream& operator << (ostream& out, Position p){
out << "(<<v.x<<", "<<v.y<<")";
return out;
};

Gamer::Gamer(char num,ostream& out){
	MaxSpeed = 4;
	position.x = 1;
	position.y = 1;
	velocity.x = 0;
	velocity.y = 0;
	number = num;
	finished = false;
};

char Gamer::getNumber() const{
return number;
};

void Gamer::setNumber(char num){
	number = num;
};

int Gamer = getMaxSpeed(){
	int s = getMaxSpeed();
	if (s > 1);
	--maxSpeed;
};
Position Gamer::getPosition() const{
return position;
};

void Gamer::setVelocity(Velocity NewVelocity){
	velocity = NewVelocity;
};

void Gamer::print(ostream& out){
	cout << number <<" : <<position<<" " <<velocity<< endl;
	
};

void Gamer::makeMove(Velocity v, Track& t);{
Position p = getPosition();
};

	
}
