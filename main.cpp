#include <iostream>
#include <cstring>
#include "card.h"
#include "player.h"
#define DEBUG 1 //Set Debug mode

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
	#if DEBUG
		cout <<"---------------------------------------"<<endl;
		cout << "Check Deck (C)"<< endl;
		cout << "Print PlayerHand (P)"<<endl;
		cout <<"---------------------------------------"<<endl;
	#endif	
		cout << "Play (A)"<<endl;
		cout << "Hit (H)"<<endl;
		cout << "Stay (S)"<<endl;
		cout << "Exit Game (X)"<< endl;
		cin>>action;
		
		switch(action){
	#if DEBUG 
			
			case 'C':
				cout<<"Current Deck status:"<<endl;
				Cards.printDeck();
				break;
	
			case 'P':
				cout << "Printing Player's Hand"<<endl;
				Cards.printPlayerDeck();
				playerOne.printPlayerHand();
				break;
	#endif		
			case 'A':
				Cards.createDeck();
				Cards.playerDeal();
				Cards.dealerDeal();
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