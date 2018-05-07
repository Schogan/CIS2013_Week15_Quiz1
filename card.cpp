#include "card.h"

using namespace std;

card::card(){
	
}

	char Suit[4];
	int playerHand[10];

	int deck[3][51];
	
	int createDeck(){
				
		for (int i=0;i<=3;i++){
						
			/*if (i == 0){cout<< 'D'<<' ';}
			if (i == 1){cout<< 'S'<<' ';}
			if (i == 2){cout<< 'H'<<' ';}
			if (i == 3){cout<< 'C'<<' ';}*/
		
			for (int j=0;j<=12;j++){
				deck[i][j]=i+1;
				deck[i][j]=j+1;
							
				//if (i == 1){ Suit = 'D';}
				//if (i == 2){ Suit = 'S';}
				//if (i == 3){ Suit = 'H';}
				//if (i == 4){ Suit = 'C';}
			
				//cout<<j+1<< ' ';
				
			}
			cout<<endl;
		}	
		
	}
	/*int player_first_card = rand() % 13 + 1;
				
		if (player_first_card == 10){
			cout << "J";
			player_first_card = 10;
		}
		if (player_first_card == 11){
			cout << "Q";
			player_first_card = 10;
		}
		if (player_first_card == 12){
			cout << "K";
			player_first_card = 10;
		}
		if ((player_first_card == 13) || (player_first_card == 1)){
			cout << "A";
			player_first_card = 11;
		}
		if ((player_first_card <= 9) && (player_first_card >= 2)){
			cout << player_first_card;
		}
		cout <<" and ";
				
		int player_second_card = rand() % 13 + 1;
			
		if (player_second_card == 10){
			cout << "J";
			player_second_card = 10;
		}
		if (player_second_card == 11){
			cout << "Q";
			player_second_card = 10;
		}
		if (player_second_card == 12){
			cout << "K";
			player_second_card = 10;
		}
		if ((player_second_card == 13) || (player_second_card == 1)){
			cout << "A";
			player_second_card = 11;
		}
		if ((player_second_card <= 9) && (player_second_card >= 2)){
			cout << player_second_card;
		}
}*/