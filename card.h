#include <iostream>
#include <string>

using namespace std;

class card{
	public:
		//const int suit=3;
		//const int numCards=12;
		int playerHand[3][12];
		int dealerHand[3][12];
		
		card();
		~card();
		
		void createDeck();
		void playerCard();
		void dealerCard();
		void playerDeal();
		void dealerDeal();
		void getPlayerHand();
		void getDealerHand();
		void printDeck();
		int randomNumGen();
};