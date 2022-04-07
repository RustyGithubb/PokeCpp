#pragma once
#include "Pokemon.h"

class Battle
{
	//Reference of the two pokemons fighting
	//whose turn it is
private:
	Pokemon* mpFighters[2]{};
	bool mTurn;

	//PlayTurn function --> List playing pokemon abilities,
	//let player choose, the other pokemon takes the damage
	void PlayTurn();

	//NextTurn function --> End of a turn, change who is playing
	void NextTurn();
	//EndBattle
	void EndBattle();

public:
	//Constructors / Destructor
	Battle();
	Battle(Pokemon& first, Pokemon& second);
	~Battle();
	//StartBattle function
	void StartBattle();

	
};

