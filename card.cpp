#include "card.h"
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#define DEBUG 1 //Set Debug mode

using namespace std;

card::card(){
	#if DEBUG
	cout <<"---------------------------------------"<<endl;
	cout<<"!!!DEBUG MODE ACTIVE ON card.cpp!!!"<<endl;
	cout <<"---------------------------------------"<<endl;
	#endif
	//srand(time(NULL));
	//createDeck();
	//playerDeal();
	//dealerDeal();
}

card::~card(){
	
}
	const int suit=3;
	const int numCards=12;
	int deck[suit][numCards];
	int playerHand[suit][numCards];
	int dealerHand[suit][numCards];
	int RandA;
	int RandB;
	
	int card::randomNumGen(){
	#if DEBUG
		cout <<"---------------------------------------"<<endl;
		cout <<" randomNumGen ran here "<<endl;
		cout <<"---------------------------------------"<<endl;
	#endif	
		srand(time(NULL));
		for(int i=1;i>=1;i--){
			RandA = rand() % 4;
			Sleep(1000);
		}
		
		for(int i=1;i>=1;i--){
			RandB = rand() % 12 + 1;
			Sleep(1000);
		}
		
	}
	
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
		cout <<"---------------------------------------"<<endl;
		cout<<"Deck has been created!"<<endl;
		for (int i=0;i<=suit;i++){
			for (int j=0;j<=numCards;j++){
				cout << deck[i][j]<<' ';
			}
			cout<<endl;
		}
		cout <<"---------------------------------------"<<endl;
	#endif	
	}
	//----------------------------------------------------------------------
	void card::playerDeal(){
		
		//srand(time(NULL));
		
		//Zero out playerHand
		for (int i=0;i<=suit;i++){
			
			for (int j=0;j<=numCards;j++){
				playerHand[i][j]=0;
			}
			cout<<endl;
		}
		
		for(int i=1;i<=2;i++){
			//int A = rand() % 4;
			//int B = rand() % 12 + 1;
			card::randomNumGen();
			
			playerHand[RandA][RandB]=1;
			deck[RandA][RandB]=1;
					

		#if DEBUG	//Test to verify rand is working
			cout <<"---------------------------------------"<<endl;
			cout << RandA << " and " << RandB << endl;
			cout <<"---------------------------------------"<<endl;
		#endif
		}
		
		#if DEBUG//Test to verify player hand
		cout <<"---------------------------------------"<<endl;
		cout <<"Player's Cards"<<endl;
		for (int i=0;i<=suit;i++){
			for (int j=0;j<=numCards;j++){
				cout << playerHand[i][j]<<' ';
			}
			cout<<endl;
		}
		cout <<"---------------------------------------"<<endl;
		#endif
	
	}
	//----------------------------------------------------------------------
	void card::dealerDeal(){
		//srand(time(NULL));
		
		//Zero out dealerHand
		for (int i=0;i<=suit;i++){
			
			for (int j=0;j<=numCards;j++){
				dealerHand[i][j]=0;
			}
			cout<<endl;
		}
		
		for(int i=1;i<=2;i++){
			//int A = rand() % 4;
			//int B = rand() % 12 + 1;
			card::randomNumGen();
			
			dealerHand[RandA][RandB]=1;
			deck[RandA][RandB]=1;		

		#if DEBUG	//Test to verify rand is working
			cout <<"---------------------------------------"<<endl;
			cout << RandA << " and " << RandB << endl;
			cout <<"---------------------------------------"<<endl;
		#endif
		}
		
		#if DEBUG//Test to verify dealer hand
		cout <<"---------------------------------------"<<endl;
		cout <<"Dealer's Cards"<<endl;		
		for (int i=0;i<=suit;i++){
			for (int j=0;j<=numCards;j++){
				cout << dealerHand[i][j]<<' ';
			}
			cout<<endl;
		}
		cout <<"---------------------------------------"<<endl;
		#endif
	}
	//----------------------------------------------------------------------
	void card::playerCard(){
		//int A = rand() % 4;
		//int B = rand() % 12 + 1;
		card::randomNumGen();
			
		if(playerHand[RandA][RandB] !=1){
			playerHand[RandA][RandB]=1;
		}
		else if(playerHand[RandA][RandB]==1){
			playerCard();
		}
	}
	//----------------------------------------------------------------------
	void card::dealerCard(){
		//int A = rand() % 4;
		//int B = rand() % 12 + 1;
		card::randomNumGen();
			
		if(dealerHand[RandA][RandB] !=1){
			dealerHand[RandA][RandB]=1;
		}
		else if(dealerHand[RandA][RandB]==1){
			dealerCard();
		}
	}
	
	void card::getPlayerHand(){
		
	}
	
	void card::getDealerHand(){
		
	}
	
	void card::printDeck(){
		for (int i=0;i<=suit;i++){
			for (int j=0;j<=numCards;j++){
				cout << deck[i][j]<<' ';
			}
			cout<<endl;
		}
	}