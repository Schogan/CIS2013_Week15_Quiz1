#include <iostream>
#include <cstring>
#include "card.h"
#include "player.h"
#define DEBUG 0 //Set Debug mode

using namespace std;

		
int main(){
	bool Start_Game = false;
	bool keep_playing = true;
	bool player_bust = false;
	bool dealer_bust = false;
	bool player_stay = false;
	bool dealer_stay = false;
	bool Dealer_turn = false;
	bool Run_Eval = false;
	int player_total = 0;
	int dealer_total = 0;
	char action;
	
	#if DEBUG
	cout<<"!!!DEBUG MODE ACTIVE ON main.cpp!!!"<<endl;
	#endif
	
	card Cards;
	player playerOne;
	
	while (action != 'X') {
		cout << "Welcome: "<<playerOne.playerOneName<<endl;
		cout << "what would you like to do?"<<endl;
		cout << "Create Deck (C)"<< endl;
		cout << "Test playerDeal (P)"<<endl;
		cout << "Play (A)"<<endl;
		cout << "Hit (H)"<<endl;
		cout << "Stay (S)"<<endl;
		cout << "Exit Game (X)"<< endl;
		cin>>action;
		
		switch(action){
			case 'C':
				cout<<"Deck has been created!"<<endl;
				Cards.createDeck();
				break;
			case 'P':
				cout<<"Your first cards are:"<<endl;
				Cards.playerDeal();
				break;
			case 'A':
				playerOne.playerAction();
				
				break;
			case 'H':
				playerOne.playerHit();
				
				break;
			case 'S':
				playerOne.playerStay();
				
				break;
			case 'X':
				cout<< "goodbye";
				//keep_playing=false;
		}		
	}
	
	/*while (keep_playing) {
		
		srand(time(NULL));
		
		
		
		
		int Eval = 1;
		int Player_Start = 1;
		int Dealer_Start = 1;
		char Start = 'a';
				
		cout << "WOULD YOU LIKE TO PLAY A GAME? y or n" << endl;
		cin >> Start;
		
		player_bust = false;
		dealer_bust = false;
		player_stay = false;
		dealer_stay = false;
		Dealer_turn = false;
		Run_Eval = false;
		
		if (Start == 'y'){
			Start_Game = true;
		}
		if (Start == 'n'){
			keep_playing = false;
		}
		
		if (Start_Game == true){
			Player_hand(Player_Start);
		}
		
		if (Dealer_turn == true){	
			Dealer_hand(Dealer_Start);
		}
		if ((dealer_stay == true) && (dealer_bust == false)) {
			Evaluation(Eval);
		}
								
	}*/
	
	//return 0;
	
}