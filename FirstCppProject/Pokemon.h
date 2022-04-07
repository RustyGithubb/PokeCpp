#pragma once
#include <string>
#include <vector>
#include "Ability.h"
class Pokemon
{
private:
	std::string mName;
	std::string mDescription;
	int mMaxLifePoints;
	int mCurrentLifePoints;
	//Should add Abilities later
	std::vector<Ability> mAbilities;
public:
	std::string petName;
	const int MAX_ABILITIES = 4;
	Pokemon();
	Pokemon(std::string name, std::string desc, int maxLifePoints);
	//Add constructor with abilities parameter

	~Pokemon();

	std::string GetName();
	std::string GetDescription();
	int GetMaxLifePoints();
	int GetCurrentLifePoints();
	void Hurt(int points);
	void Heal(int points);
	//Add learn ability
	void LearnAbility(Ability ability);
	void DisplayAbilities();
	int GetAbilityCount();
	//Add getability from index
	Ability GetAbility(int index);
	//Add attack
	void Attack(Pokemon& target, int ability);

	void DisplaySumUp();

};

