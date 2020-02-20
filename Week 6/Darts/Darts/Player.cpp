#include "Player.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Player::round()
{
	srand(time(0));


	bull();
	throws++;
	cout << hit << endl;

}
//bool Player::bullseye()
//{
//	bool bullseye = rand() % 100 < accuracy;
//	return bullseye;
//}
int Player::target()
{
	int target;
	if (score >= 100 || score == 50)
	{
		target = 50;

	}
	else
	{
		target = score - 50;
	}
	return target;
}
int Player::bull()
{

	bool hit;
	int target = Player::target();

	if (target==50) 
	{
		bool bull = rand() % 100 < accuracy;
		if (bull == true) 
		{ 
			return 50;
			cout << "Hit Bull!\n";
		}
		else
		{
			return 0;
			cout << "Miss!\n";
		}
	}
	else
	{

	}

	//bool bull;

	//bull = rand() % 100 < accuracy;

	//if (bull == true) { return 50; }
	//else
	//{return 1 + rand() % 20;}


	}
