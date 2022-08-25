#include "Character.h"

Character::Character(std::string name, int maxHP, int attack)
	: mName{ name }, mMaxHP{ maxHP }, mHP{ maxHP }, mAttack{ attack }
{
}

void Character::DisplayHealth()
{
	std::cout << mName << " : " << mHP << std::endl;
}