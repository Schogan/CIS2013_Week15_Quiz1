#include <iostream>
#include <cstring>
#include "card.h"
#include "player.h"

using namespace std;

	int deck[4][52];


	int createDeck(){
		int deck[4][52];
		
		for (int i=0;i<=4;i++){
			for (int j=0;j<=13;j++){
				//if
				//int cardSuit rand() % 4 + 1;
			
				//if (i == 1){ Suit = 'D';}
				//if (i == 2){ Suit = 'S';}
				//if (i == 3){ Suit = 'H';}
				//if (i == 4){ Suit = 'C';}
			
				//int playercard = rand() % 13 + 1;
						
				if (j == 10){
					//cout << "J";
					deck[i][10];
				}
				if (j == 11){
					//cout << "Q";
					deck[i][10];
				}
				if (j == 12){
					//cout << "K";
					deck[i][10];
				}
				if ((j == 13) || (j == 1)){
					//cout << "A";
					deck[i][11];
				}
				if ((j <= 9) && (j >= 2)){
					deck[i][j];
				}
			}
		}
		for (int i=0;i<=4;i++){
			for (int j=0;j<=13;j++){
			cout << deck[i][j];
			}
		}
	}	
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

	createDeck();
	/*while(keep_playing){
		for (int i=0;i<=4;i++){
			for (int j=0;j<=13;j++){
			cout << deck[i][j];
			}
		}
	}*/
	
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
	
	return 0;
	
}