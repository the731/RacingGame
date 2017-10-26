#include <iostream>

#include <game.h>

using namespace std

Game::Game(istream& in, istream& input, ostream& out):
	T(in, out),
	hPlayer ('1', input, out),
	{
	};
	
	void Game:playGame(istream& in, istream& input, ostream& out):
		bool status = false;
		assignStart();
		int play = 1;
		
		while(!status){
			if(play == 1){
				T.printtrack(out);
			
			gamer.human.print(out);
			T.printTrack(out);
			gamer.human.print(out);
			gamer.GetNextMove(T, input, out);
			status = GameEnded();
		}
}

Game::gameEnded(){
	bool result = false;
	if (player.human.finished)
	result = true;
	
	return result;
};
