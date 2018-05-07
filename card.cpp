#include "card.h"

using namespace std;

card::card(){
	
}

card::~card(){
	
}

	int deck[3][51];
	
	void card::createDeck(){
				
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
		//Test to verify deck creation
	
		/*for (int i=0;i<=3;i++){
			for (int j=0;j<=12;j++){
				cout << deck[i][j]<<' ';
			}
			cout<<endl;
		}*/
		
	}
	void card::playerDeal(){
		/*int player_first_card_suit = rand() % 4 + 1;
		int player_second_card_suit = rand() % 4 + 1;
		int player_first_card_value = rand() % 13 + 1;
		int player_second_card_value = rand() % 13 + 1;
		int player_first_card[a][b] = deck[player_first_card_suit][player_first_card_value];
		int player_second_card[a][b] = deck[player_second_card_suit][player_second_card_value];
		*/
		int playerHand[3][51];
		
		//Zero out playerHand
		for (int i=0;i<=3;i++){
			for (int j=0;j<=12;j++){
				//cout << playerHand[i][j]<<' ';
				playerHand[i][j]=0;
			}
			//cout<<endl;
		}
		
		for(int i=0;i<=1;i++){
			int A = rand() % 4 + 1;
			int B = rand() % 13 + 1;
			/*for(int a=0;a<=A;a++){
				for(int b=0;b<=B;b++){
					deck[a][b] >> playerHand[a][b];
					
				}
			}*/
			//Test to verify rand is working
			cout << A << " and " << B << endl;
			playerHand[A][B];
					//playerHand[a][b]=b;
		}
		//Test to verify player hand
		for (int i=0;i<=3;i++){
			for (int j=0;j<=12;j++){
				cout << playerHand[i][j]<<' ';
			}
			cout<<endl;
		}
		
	
	}
	void card::dealerDeal(){
		/*int dealer_first_card_suit = rand() % 4 + 1;
		int dealer_second_card_suit = rand() % 4 + 1;
		int dealer_first_card_value = rand() % 13 + 1;
		int dealer_second_card_value = rand() % 13 + 1;
		int dealer_first_card[a][b] = deck[dealer_first_card_suit][dealer_first_card_value];
		int dealer_second_card[a][b] = deck[dealer_second_card_suit][dealer_second_card_value];
		*/
	}
	
	void card::playerCard(){
		
	}
	
	void card::dealerCard(){
		
	}
	