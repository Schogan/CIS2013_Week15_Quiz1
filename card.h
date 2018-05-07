#include <iostream>
#include <cstring>

using namespace std;

class card{
	public:
		
		card();
		~card();
		
		void createDeck();
		void playerCard();
		void dealerCard();
		void playerDeal();
		void dealerDeal();
};