#pragma once
#include <string>
using namespace std;

class Player
{
public:
	string name;
	int accuracy, hits, throws, score = 301;
	
	void round();
	int bull();
	int target();
};

