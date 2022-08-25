#pragma once
#include <iostream>

class Character
{
public:
	std::string mName;
	int mMaxHP;
	int mHP;
	int mAttack;

	Character(std::string name, int maxHP, int attack);
	~Character()
	{
	}

	void DisplayHealth();
};

