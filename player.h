#include <iostream>
#include <string>

using namespace std;

class player{
	private:
		
	public:
		string playerOneName;
		
		
		player();
		~player();
		
		void printPlayerHand();
		void printDealerHand();
		void playerName();
		void playerAction();
		void playerHit();
		void playerStay();
		void getPlayerName();
		//int cardSelect(int,int);
	
};