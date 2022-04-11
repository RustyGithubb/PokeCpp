#pragma once
#include <string>
#include <Vector>
#include "Pokemon.h"


using namespace std;



class Trainer
{

private:

	//name
	string mName;
	//CatchPhrase
	string mCatch;
	//Money
	int mCurrentMoney;
	//Type
	string mType;
	//Pokeballs count
	int mBallCount;
	//Pokemons
	vector <Pokemon> mPokemon ;
	//Inventory with Item Object
	int m;

	//wich Pokemon is active now
	int mActivePokemon;

public :

	//Contrusctors / Destructor
	Trainer();
	Trainer(string name, string Description, string money);
	~Trainer();

	//getters / Setters 
	string GetName();
	string GetDesc();
	string GetType();
	int GetMoney();
	int GetPokeballCount();
	Pokemon& GetPokemon(int index);
	Pokemon& GetActivePokemon();
	int GetPokemonCount();
	void Introduce(); // Display type, name, catchphase
	void DisplayPokemon(); // Display each pokemon the trainer has

	//CatchPokemon
	void CatchPokemon(Pokemon pokemon);

	//Send Pokemon
	void SendPokemon(Pokemon& sent);
	//
	// BuyItem
	// 
	//Recall Pokemon
	void RecallPokemon();
	
	//Buy Item
	void BuyItem(int cost, int numbr);

	//Sell Item
	void SellItem(int value, int numbr);

};

