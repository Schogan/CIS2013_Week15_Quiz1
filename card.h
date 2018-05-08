#include <iostream>
#include <string>

using namespace std;

class card{
	public:
		int playerHand[suit][numCards];
		int dealerHand[suit][numCards];
		
		card();
		~card();
		
		void createDeck();
		void playerCard();
		void dealerCard();
		void playerDeal();
		void dealerDeal();
		void getPlayerHand();
		void getDealerHand();
};