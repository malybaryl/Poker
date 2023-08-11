#include "drawCards.h"

using namespace std;

void drawCards(std::string& firstCard, std::string& secondCard, std::string& thirdCard, std::string& fourthCard, std::string& fivethCard, bool& spadeAce, bool& heartAce, bool& diamondAce, bool& clubAce, bool& spade2, bool& heart2, bool& diamond2, bool& club2, bool& spade3, bool& heart3, bool& diamond3, bool& club3, bool& spade4, bool& heart4, bool& diamond4, bool& club4, bool& spade5, bool& heart5, bool& diamond5, bool& club5, bool& spade6, bool& heart6, bool& diamond6, bool& club6, bool& spade7, bool& heart7, bool& diamond7, bool& club7, bool& spade8, bool& heart8, bool& diamond8, bool& club8, bool& spade9, bool& heart9, bool& diamond9, bool& club9, bool& spade10, bool& heart10, bool& diamond10, bool& club10, bool& spadeJack, bool& heartJack, bool& diamondJack, bool& clubJack, bool& spadeQueen, bool& heartQueen, bool& diamondQueen, bool& clubQueen, bool& spadeKing, bool& heartKing, bool& diamondKing, bool& clubKing, bool fstCard, bool sndCard, bool trdCard, bool fthCard, bool fftCard)
{
	int chance;
	int chanceColor;

	while (fstCard == true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				firstCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				firstCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				firstCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				firstCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				firstCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				firstCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				firstCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				firstCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				firstCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				firstCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				firstCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				firstCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				firstCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				firstCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				firstCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				firstCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				firstCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				firstCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				firstCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				firstCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				firstCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				firstCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				firstCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				firstCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				firstCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				firstCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				firstCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				firstCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				firstCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				firstCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				firstCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				firstCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				firstCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				firstCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				firstCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				firstCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				firstCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				firstCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				firstCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				firstCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				firstCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				firstCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				firstCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				firstCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				firstCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				firstCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				firstCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				firstCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				firstCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				firstCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				firstCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				firstCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (sndCard == true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				secondCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				secondCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				secondCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				secondCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				secondCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				secondCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				secondCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				secondCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				secondCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				secondCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				secondCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				secondCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				secondCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				secondCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				secondCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				secondCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				secondCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				secondCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				secondCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				secondCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				secondCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				secondCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				secondCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				secondCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				secondCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				secondCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				secondCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				secondCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				secondCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				secondCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				secondCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				secondCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				secondCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				secondCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				secondCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				secondCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				secondCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				secondCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				secondCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				secondCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				secondCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				secondCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				secondCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				secondCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				secondCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				secondCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				secondCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				secondCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				secondCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				secondCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				secondCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				secondCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (trdCard == true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				thirdCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				thirdCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				thirdCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				thirdCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				thirdCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				thirdCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				thirdCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				thirdCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				thirdCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				thirdCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				thirdCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				thirdCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				thirdCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				thirdCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				thirdCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				thirdCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				thirdCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				thirdCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				thirdCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				thirdCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				thirdCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				thirdCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				thirdCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				thirdCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				thirdCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				thirdCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				thirdCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				thirdCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				thirdCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				thirdCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				thirdCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				thirdCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				thirdCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				thirdCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				thirdCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				thirdCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				thirdCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				thirdCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				thirdCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				thirdCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				thirdCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				thirdCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				thirdCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				thirdCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				thirdCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				thirdCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				thirdCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				thirdCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				thirdCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				thirdCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				thirdCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				thirdCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (fthCard == true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fourthCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fourthCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fourthCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fourthCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fourthCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fourthCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fourthCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fourthCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				fourthCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				fourthCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				fourthCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				fourthCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				fourthCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				fourthCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				fourthCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				fourthCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				fourthCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				fourthCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				fourthCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				fourthCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				fourthCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				fourthCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				fourthCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				fourthCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				fourthCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				fourthCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				fourthCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				fourthCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				fourthCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				fourthCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				fourthCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				fourthCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				fourthCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				fourthCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				fourthCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				fourthCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				fourthCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				fourthCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				fourthCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				fourthCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				fourthCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				fourthCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				fourthCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				fourthCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				fourthCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				fourthCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				fourthCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				fourthCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				fourthCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				fourthCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				fourthCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				fourthCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (fftCard == true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fivethCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fivethCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fivethCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fivethCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fivethCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fivethCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fivethCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fivethCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				fivethCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				fivethCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				fivethCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				fivethCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				fivethCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				fivethCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				fivethCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				fivethCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				fivethCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				fivethCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				fivethCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				fivethCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				fivethCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				fivethCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				fivethCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				fivethCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				fivethCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				fivethCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				fivethCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				fivethCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				fivethCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				fivethCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				fivethCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				fivethCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				fivethCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				fivethCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				fivethCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				fivethCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				fivethCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				fivethCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				fivethCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				fivethCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				fivethCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				fivethCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				fivethCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				fivethCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				fivethCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				fivethCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				fivethCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				fivethCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				fivethCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				fivethCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				fivethCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				fivethCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
}