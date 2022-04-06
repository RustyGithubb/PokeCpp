#include "Ability.h"
using namespace std;

//Constructors / Desctructor
Ability::Ability()
{
	mName = "Default";
	mDescription = "Default";
	mDamages = 0;
	mEnergyCost = -1;
}
Ability::Ability(string name, string desc, int damages)
{
	mName = name;
	mDescription = desc;
	mDamages = damages;
	mEnergyCost = 0;
}
Ability::Ability(string name, string desc, int damages, int energy)
{
	mName = name;
	mDescription = desc;
	mDamages = damages;
	mEnergyCost = energy;
}

Ability::~Ability() {}
//Getters for attributes
string Ability::GetName() { return mName;  }
string Ability::GetDescription() { return mDescription; }
int Ability::GetDamages() { return mDamages; }
int Ability::GetEnergyCost() { return mEnergyCost; }