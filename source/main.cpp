#include <iostream>
#include <cstdlib>
#include <ctime>
#include "drawCards.h"
#include "checkCards.h"
#include "transformCardsName.h"

using namespace std;

int main()
{
	bool game = true;
	while (game == true)
	{
		srand(time(NULL));
		string firstCard;
		string firstCard_;
		string firstCard__;
		string secondCard;
		string secondCard_;
		string secondCard__;
		string thirdCard;
		string thirdCard_;
		string thirdCard__;
		string fourthCard;
		string fourthCard_;
		string fourthCard__;
		string fivethCard;
		string fivethCard_;
		string fivethCard__;
		string answer;

		bool spadeAce = true;
		bool heartAce = true;
		bool diamondAce = true;
		bool clubAce = true;
		bool spade2 = true;
		bool heart2 = true;
		bool diamond2 = true;
		bool club2 = true;
		bool spade3 = true;
		bool heart3 = true;
		bool diamond3 = true;
		bool club3 = true;
		bool spade4 = true;
		bool heart4 = true;
		bool diamond4 = true;
		bool club4 = true;
		bool spade5 = true;
		bool heart5 = true;
		bool diamond5 = true;
		bool club5 = true;
		bool spade6 = true;
		bool heart6 = true;
		bool diamond6 = true;
		bool club6 = true;
		bool spade7 = true;
		bool heart7 = true;
		bool diamond7 = true;
		bool club7 = true;
		bool spade8 = true;
		bool heart8 = true;
		bool diamond8 = true;
		bool club8 = true;
		bool spade9 = true;
		bool heart9 = true;
		bool diamond9 = true;
		bool club9 = true;
		bool spade10 = true;
		bool heart10 = true;
		bool diamond10 = true;
		bool club10 = true;
		bool spadeJack = true;
		bool heartJack = true;
		bool diamondJack = true;
		bool clubJack = true;
		bool spadeQueen = true;
		bool heartQueen = true;
		bool diamondQueen = true;
		bool clubQueen = true;
		bool spadeKing = true;
		bool heartKing = true;
		bool diamondKing = true;
		bool clubKing = true;

		bool fstCard = true;
		bool sndCard = true;
		bool trdCard = true;
		bool fthCard = true;
		bool fftCard = true;

		int counter = 0;

		while (true)
		{

			drawCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard, spadeAce, heartAce, diamondAce, clubAce, spade2, heart2, diamond2, club2, spade3, heart3, diamond3, club3, spade4, heart4, diamond4, club4, spade5, heart5, diamond5, club5, spade6, heart6, diamond6, club6, spade7, heart7, diamond7, club7, spade8, heart8, diamond8, club8, spade9, heart9, diamond9, club9, spade10, heart10, diamond10, club10, spadeJack, heartJack, diamondJack, clubJack, spadeQueen, heartQueen, diamondQueen, clubQueen, spadeKing, heartKing, diamondKing, clubKing, fstCard, sndCard, trdCard, fthCard, fftCard);

			cout << "Yours cards: " << firstCard << " | " << secondCard << " | " << thirdCard << " | " << fourthCard << " | " << fivethCard << endl;

			cout << "Do you want to draw cards? yes/no" << endl;
			cin >> answer;
			if (answer == "yes")
			{
				while (true)
				{
					cout << endl << "Do you want to draw first card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						fstCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw second card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						sndCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw third card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						trdCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw fourth card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						fthCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw fiveth card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						fftCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}

				drawCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard, spadeAce, heartAce, diamondAce, clubAce, spade2, heart2, diamond2, club2, spade3, heart3, diamond3, club3, spade4, heart4, diamond4, club4, spade5, heart5, diamond5, club5, spade6, heart6, diamond6, club6, spade7, heart7, diamond7, club7, spade8, heart8, diamond8, club8, spade9, heart9, diamond9, club9, spade10, heart10, diamond10, club10, spadeJack, heartJack, diamondJack, clubJack, spadeQueen, heartQueen, diamondQueen, clubQueen, spadeKing, heartKing, diamondKing, clubKing, fstCard, sndCard, trdCard, fthCard, fftCard);

				cout << endl << "Yours cards: " << firstCard << " | " << secondCard << " | " << thirdCard << " | " << fourthCard << " | " << fivethCard << endl;

				answer = "no";
			}
			if (answer == "no")
			{
				checkCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard, counter);

				firstCard_ = firstCard;
				secondCard_ = secondCard;
				thirdCard_ = thirdCard;
				fourthCard_ = fourthCard;
				fivethCard_ = fivethCard;


				transformCardsName(firstCard_);
				transformCardsName(secondCard_);
				transformCardsName(thirdCard_);
				transformCardsName(fourthCard_);
				transformCardsName(fivethCard_);

				checkCardsDifferentColor(firstCard_, secondCard_, thirdCard_, fourthCard_, fivethCard_, counter);

				firstCard__ = firstCard;
				secondCard__ = secondCard;
				thirdCard__ = thirdCard;
				fourthCard__ = fourthCard;
				fivethCard__ = fivethCard;

				transformCardsColor(firstCard__);
				transformCardsColor(secondCard__);
				transformCardsColor(thirdCard__);
				transformCardsColor(fourthCard__);
				transformCardsColor(fivethCard__);

				checkCardsSameColor(firstCard__, secondCard__, thirdCard__, fourthCard__, fivethCard__, counter);

				if (counter < 1)
				{
					cout << "NOTHING" << endl;
				}
				break;
			}
			else
			{
				cout << "wrong command..." << endl;
			}
		}
		while (true)
		{
			cout << endl << "Do you want to play again? yes/no" << endl;
			cin >> answer;
			if (answer == "no")
			{
				game = false;
				break;
			}
			else if (answer != "yes")
			{
				cout << "wrong command..." << endl;
			}
			else if (answer == "yes")
			{
				cout << endl;
				break;
			}
		}
	}
}