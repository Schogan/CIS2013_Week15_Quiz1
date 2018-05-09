#include "player.h"
#include "card.h"
#include <string>
#define DEBUG 1 //Set Debug mode

using namespace std;

card Cards;

string playerOneName;
const int suit=3;
const int numCards=12;

int playerScore =0;
int dealerScore =0;
int cardSuit=0;
int	cardValue=0;
int a = cardSuit;
int b = cardValue;


player::player(){
	#if DEBUG
	cout <<"---------------------------------------"<<endl;
	cout<<"!!!DEBUG MODE ACTIVE ON player.cpp!!!"<<endl;
	cout <<"---------------------------------------"<<endl;
	#endif
	playerName();
	
}

player::~player(){
	
}

void player::printDealerHand(){
	
}

void player::playerName(){
	cout << "Please set your name:"<<endl;
	cin>> playerOneName;
}

void player::playerHit(){
	cout<<"You choose to hit:"<<endl;
	Cards.playerCard();
}

void player::playerStay(){
	cout<<"You choose to stay:"<<endl;
	
}

void player::getPlayerName(){
	cout << playerOneName;
}

void player::playerAction(){
	
	
}
int cardSelect(int CS,int CV){
	#if DEBUG
			cout <<"---------------------------------------"<<endl;
			cout << "Start cardSelect"<<endl;
			cout << "Integers sent "<< CS << " and " << CV << ' ' <<endl;
			cout <<"---------------------------------------"<<endl;
	#endif
	int a=CS;
	int b=CV;
	if (a == 0){
		if (b == 9){
			cout << "J of Hearts "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 10){
			cout << "Q of Hearts "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 11){
			cout << "K of Hearts "<<endl;
			playerScore = playerScore+ 10;
		}
		if ((b == 12) || (b == 0)){
			cout << "A of Hearts "<<endl;
			playerScore = playerScore+ 11;
		}
		if ((b <= 8) && (b >= 1)){
			cout << b << " of Hearts "<<endl;
			playerScore = playerScore + b;
					
		}
		
	}
	if (a == 1){
		if (b == 9){
			cout << "J of Spades "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 10){
			cout << "Q of Spades "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 11){
			cout << "K of Spades " <<endl;
			playerScore = playerScore+ 10;
		}
		if ((b == 12) || (b == 0)){
			cout << "A of Spades "<<endl;
			playerScore = playerScore+ 11;
		}
		if ((b <= 8) && (b >= 1)){
			cout << b << " of Spades "<<endl;
			playerScore = playerScore + b;
					
		}
		
	}
	if (a == 2){
		if (b == 9){
			cout << "J of Diamonds "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 10){
			cout << "Q of Diamonds "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 11){
			cout << "K of Diamonds "<<endl;
			playerScore = playerScore+ 10;
		}
		if ((b == 12) || (b == 0)){
			cout << "A of Diamonds "<<endl;
			playerScore = playerScore+ 11;
		}
		if ((b <= 8) && (b >= 1)){
			cout << b << " of Diamonds "<<endl;
			playerScore = playerScore + b;
					
		}
		
	}
	if (a == 3){
		if (b == 9){
			cout << "J of Clubs "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 10){
			cout << "Q of Clubs "<<endl;
			playerScore = playerScore+ 10;
		}
		if (b == 11){
			cout << "K of Clubs "<<endl;
			playerScore = playerScore+ 10;
		}
		if ((b == 12) || (b == 0)){
			cout << "A of Clubs "<<endl;
			playerScore = playerScore+ 11;
		}
		if ((b <= 8) && (b >= 1)){
			cout << b << " of Clubs "<<endl;
			playerScore = playerScore + b;
					
		}
		
	}
	
	
}

void player::printPlayerHand(){
	
	//cout<< "Your cards are: "<<endl;
	for(int i=0;i<=3;i++){
		for(int j=0;j<=12;j++){
	#if DEBUG
			//cout <<Cards.playerHand[i][j];
	#endif		
			if (Cards.playerHand[i][j]==1){
				//cardSuit=i;
	#if DEBUG			//cardValue=j;
				cout <<"---------------------------------------"<<endl;
				cout << "For loop printPlayerHand"<<endl;
				cout <<"---------------------------------------"<<endl;
	#endif			
				cardSelect(i,j);
			}
			//else if (Cards.playerHand[i][j]!=1){
				
			//}
		}
	}
}