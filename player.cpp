#include "player.h"
#include "card.h"
#include <string>
#define DEBUG 0 //Set Debug mode

using namespace std;

card Cards;

string playerOneName;


player::player(){
	#if DEBUG
	cout<<"!!!DEBUG MODE ACTIVE ON player.cpp!!!"<<endl;
	#endif
	playerName();
}

player::~player(){
	
}

void player::printPlayerHand(){
	
}

void player::printDealerHand(){
	
}

void player::playerName(){
	cout << "Please set your name:"<<endl;
	cin>> playerOneName;
}

void player::playerAction(){
	cout<<"You choose to hit:"<<endl;
	Cards.playerCard();
}

void player::playerHit(){
	cout<<"You choose to hit:"<<endl;
	Cards.playerCard();
}

void player::playerStay(){
	cout<<"You choose to stay:"<<endl;
	//Cards.playerCard();
}

void player::getPlayerName(){
	cout << playerOneName;
}