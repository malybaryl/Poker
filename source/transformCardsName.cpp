#include "transformCardsName.h"

using namespace std;

void transformCardsName(std::string& cardName)
{
	if (cardName == "SPADE ACE")
		cardName = "ACE";
	if (cardName == "HEART ACE")
		cardName = "ACE";
	if (cardName == "DIAMOND ACE")
		cardName = "ACE";
	if (cardName == "CLUB ACE")
		cardName = "ACE";

	if (cardName == "SPADE 2")
		cardName = "2";
	if (cardName == "HEART 2")
		cardName = "2";
	if (cardName == "DIAMOND 2")
		cardName = "2";
	if (cardName == "CLUB 2")
		cardName = "2";

	if (cardName == "SPADE 3")
		cardName = "3";
	if (cardName == "HEART 3")
		cardName = "3";
	if (cardName == "DIAMOND 3")
		cardName = "3";
	if (cardName == "CLUB 3")
		cardName = "3";

	if (cardName == "SPADE 4")
		cardName = "4";
	if (cardName == "HEART 4")
		cardName = "4";
	if (cardName == "DIAMOND 4")
		cardName = "4";
	if (cardName == "CLUB 4")
		cardName = "4";

	if (cardName == "SPADE 5")
		cardName = "5";
	if (cardName == "HEART 5")
		cardName = "5";
	if (cardName == "DIAMOND 5")
		cardName = "5";
	if (cardName == "CLUB 5")
		cardName = "5";

	if (cardName == "SPADE 6")
		cardName = "6";
	if (cardName == "HEART 6")
		cardName = "6";
	if (cardName == "DIAMOND 6")
		cardName = "6";
	if (cardName == "CLUB 6")
		cardName = "6";

	if (cardName == "SPADE 7")
		cardName = "7";
	if (cardName == "HEART 7")
		cardName = "7";
	if (cardName == "DIAMOND 7")
		cardName = "7";
	if (cardName == "CLUB 7")
		cardName = "7";

	if (cardName == "SPADE 8")
		cardName = "8";
	if (cardName == "HEART 8")
		cardName = "8";
	if (cardName == "DIAMOND 8")
		cardName = "8";
	if (cardName == "CLUB 8")
		cardName = "8";

	if (cardName == "SPADE 9")
		cardName = "9";
	if (cardName == "HEART 9")
		cardName = "9";
	if (cardName == "DIAMOND 9")
		cardName = "9";
	if (cardName == "CLUB 9")
		cardName = "9";

	if (cardName == "SPADE 10")
		cardName = "10";
	if (cardName == "HEART 10")
		cardName = "10";
	if (cardName == "DIAMOND 10")
		cardName = "10";
	if (cardName == "CLUB 10")
		cardName = "10";

	if (cardName == "SPADE JACK")
		cardName = "JACK";
	if (cardName == "HEART JACK")
		cardName = "JACK";
	if (cardName == "DIAMOND JACK")
		cardName = "JACK";
	if (cardName == "CLUB JACK")
		cardName = "JACK";

	if (cardName == "SPADE QUEEN")
		cardName = "QUEEN";
	if (cardName == "HEART QUEEN")
		cardName = "QUEEN";
	if (cardName == "DIAMOND QUEEN")
		cardName = "QUEEN";
	if (cardName == "CLUB QUEEN")
		cardName = "QUEEN";

	if (cardName == "SPADE KING")
		cardName = "KING";
	if (cardName == "HEART KING")
		cardName = "KING";
	if (cardName == "DIAMOND KING")
		cardName = "KING";
	if (cardName == "CLUB KING")
		cardName = "KING";
}

void transformCardsColor(std::string cardName)
{
	if (cardName == "SPADE ACE")
		cardName = "SPADE";
	if (cardName == "HEART ACE")
		cardName = "HEART";
	if (cardName == "DIAMOND ACE")
		cardName = "DIAMOND";
	if (cardName == "CLUB ACE")
		cardName = "CLUB";

	if (cardName == "SPADE 2")
		cardName = "SPADE";
	if (cardName == "HEART 2")
		cardName = "HEART";
	if (cardName == "DIAMOND 2")
		cardName = "DIAMOND";
	if (cardName == "CLUB 2")
		cardName = "CLUB";

	if (cardName == "SPADE 3")
		cardName = "SPADE";
	if (cardName == "HEART 3")
		cardName = "HEART";
	if (cardName == "DIAMOND 3")
		cardName = "DIAMOND";
	if (cardName == "CLUB 3")
		cardName = "CLUB";

	if (cardName == "SPADE 4")
		cardName = "SPADE";
	if (cardName == "HEART 4")
		cardName = "HEART";
	if (cardName == "DIAMOND 4")
		cardName = "DIAMOND";
	if (cardName == "CLUB 4")
		cardName = "CLUB";

	if (cardName == "SPADE 5")
		cardName = "SPADE";
	if (cardName == "HEART 5")
		cardName = "HEART";
	if (cardName == "DIAMOND 5")
		cardName = "DIAMOND";
	if (cardName == "CLUB 5")
		cardName = "CLUB";

	if (cardName == "SPADE 6")
		cardName = "SPADE";
	if (cardName == "HEART 6")
		cardName = "HEART";
	if (cardName == "DIAMOND 6")
		cardName = "DIAMOND";
	if (cardName == "CLUB 6")
		cardName = "CLUB";

	if (cardName == "SPADE 7")
		cardName = "SPADE";
	if (cardName == "HEART 7")
		cardName = "HEART";
	if (cardName == "DIAMOND 7")
		cardName = "DIAMOND";
	if (cardName == "CLUB 7")
		cardName = "CLUB";

	if (cardName == "SPADE 8")
		cardName = "SPADE";
	if (cardName == "HEART 8")
		cardName = "HEART";
	if (cardName == "DIAMOND 8")
		cardName = "DIAMOND";
	if (cardName == "CLUB 8")
		cardName = "CLUB";

	if (cardName == "SPADE 9")
		cardName = "SPADE";
	if (cardName == "HEART 9")
		cardName = "HEART";
	if (cardName == "DIAMOND 9")
		cardName = "DIAMOND";
	if (cardName == "CLUB 9")
		cardName = "CLUB";

	if (cardName == "SPADE 10")
		cardName = "SPADE";
	if (cardName == "HEART 10")
		cardName = "HEART";
	if (cardName == "DIAMOND 10")
		cardName = "DIAMOND";
	if (cardName == "CLUB 10")
		cardName = "CLUB";

	if (cardName == "SPADE JACK")
		cardName = "SPADE";
	if (cardName == "HEART JACK")
		cardName = "HEART";
	if (cardName == "DIAMOND JACK")
		cardName = "DIAMOND";
	if (cardName == "CLUB JACK")
		cardName = "CLUB";

	if (cardName == "SPADE QUEEN")
		cardName = "SPADE";
	if (cardName == "HEART QUEEN")
		cardName = "HEART";
	if (cardName == "DIAMOND QUEEN")
		cardName = "DIAMOND";
	if (cardName == "CLUB QUEEN")
		cardName = "CLUB";

	if (cardName == "SPADE KING")
		cardName = "SPADE";
	if (cardName == "HEART KING")
		cardName = "HEART";
	if (cardName == "DIAMOND KING")
		cardName = "DIAMOND";
	if (cardName == "CLUB KING")
		cardName = "CLUB";
}
