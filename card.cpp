#include "card.h"
#include <ctime>
#define DEBUG 0 //Set Debug mode

using namespace std;

card::card(){
	#if DEBUG
	cout<<"!!!DEBUG MODE ACTIVE ON card.cpp!!!"<<endl;
	#endif
}

card::~card(){
	
}
	const int suit=3;
	const int numCards=12;
	int deck[suit][numCards];
	int playerHand[suit][numCards];
	int dealerHand[suit][numCards];
	
	
	//----------------------------------------------------------------------
	void card::createDeck(){
				
		for (int i=0;i<=suit;i++){
						
			/*if (i == 0){cout<< 'D'<<' ';}
			if (i == 1){cout<< 'S'<<' ';}
			if (i == 2){cout<< 'H'<<' ';}
			if (i == 3){cout<< 'C'<<' ';}*/
		
			for (int j=0;j<=numCards;j++){
				deck[i][j]=0;
												
			}
			cout<<endl;
		}	
	#if DEBUG	//Test to verify deck creation
	
		for (int i=0;i<=suit;i++){
			for (int j=0;j<=numCards;j++){
				cout << deck[i][j]<<' ';
			}
			cout<<endl;
		}
	#endif	
	}
	//----------------------------------------------------------------------
	void card::playerDeal(){
		
		srand(time(NULL));
		
		//Zero out playerHand
		for (int i=0;i<=suit;i++){
			
			for (int j=0;j<=numCards;j++){
				playerHand[i][j]=0;
			}
			cout<<endl;
		}
		
		for(int i=1;i<=2;i++){
			int A = rand() % 4;
			int B = rand() % 12 + 1;
			
			playerHand[A][B]=1;
					

		#if DEBUG	//Test to verify rand is working
			cout << A << " and " << B << endl;
		#endif
		}
		
		#if DEBUG//Test to verify player hand
		for (int i=0;i<=suit;i++){
			for (int j=0;j<=numCards;j++){
				cout << playerHand[i][j]<<' ';
			}
			cout<<endl;
		}
		#endif
	
	}
	//----------------------------------------------------------------------
	void card::dealerDeal(){
		srand(time(NULL));
		
		//Zero out dealerHand
		for (int i=0;i<=suit;i++){
			
			for (int j=0;j<=numCards;j++){
				dealerHand[i][j]=0;
			}
			cout<<endl;
		}
		
		for(int i=1;i<=2;i++){
			int A = rand() % 4;
			int B = rand() % 12 + 1;
			
			dealerHand[A][B]=1;
					

		#if DEBUG	//Test to verify rand is working
			cout << A << " and " << B << endl;
		#endif
		}
		
		#if DEBUG//Test to verify dealer hand
		for (int i=0;i<=suit;i++){
			for (int j=0;j<=numCards;j++){
				cout << dealerHand[i][j]<<' ';
			}
			cout<<endl;
		}
		#endif
	}
	//----------------------------------------------------------------------
	void card::playerCard(){
		int A = rand() % 4;
		int B = rand() % 12 + 1;
			
		if(playerHand[A][B] !=1){
			playerHand[A][B]=1;
		}
		else if(playerHand[A][B]==1){
			playerCard();
		}
	}
	//----------------------------------------------------------------------
	void card::dealerCard(){
		int A = rand() % 4;
		int B = rand() % 12 + 1;
			
		if(dealerHand[A][B] !=1){
			dealerHand[A][B]=1;
		}
		else if(dealerHand[A][B]==1){
			dealerCard();
		}
	}
	
	void getPlayerHand(){
		
	}
	
	void getDealerHand(){
		
	}
	