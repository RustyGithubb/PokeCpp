#pragma once
#include <string>
//Describes a pokemon ability
class Ability
{
private:
	//Name
	std::string mName;
	//Description
	std::string mDescription;
	//Damages
	int mDamages;
	//Energy cost
	int mEnergyCost;

public:
	//Constructors / Desctructor
	Ability();
	Ability(std::string name, std::string desc, int damages);
	Ability(std::string name, std::string desc, int damages, int energy);

	~Ability();
	//Getters for attributes
	std::string GetName();
	std::string GetDescription();
	int GetDamages();
	int GetEnergyCost();
	//If you need help, raise your hand on the
	//Google Meet ! :)
};

