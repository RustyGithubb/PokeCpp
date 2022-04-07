#include "Battle.h"

void Battle::PlayTurn()
{
}

void Battle::NextTurn()
{
}

void Battle::EndBattle()
{
}

Battle::Battle()
{
	//Default constructor
	mpFighters[0] = nullptr;
	mpFighters[1] = nullptr;
}

Battle::Battle(Pokemon& first, Pokemon& second)
{
	mpFighters[0] = &first;
	mpFighters[1] = &second;
}

Battle::~Battle()
{
}

void Battle::StartBattle()
{
}
