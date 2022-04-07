// FirstCppProject.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "Pokemon.h"
#include "Utils.h"

using namespace std;



int main()
{
    cout << "Hello World!\n";
    int life = 10;
    cout << "The value " << life << " is stored at memory adress : " << &life << endl;
    Damage(life);
    cout << life << endl;
    DamageReference(life);
    cout << life << endl;
    DamagePointedObject(&life);
    cout << life << endl;
    //if life > 5 show "Alive" else show "Dying"
    cout << "Player is " << GetLifeText(life) << endl;

    //ShowMultiDimensionalMap();
    //ShowVector();
    cout << "============PIKACHU=============\n";
    Pokemon pikachu = Pokemon("Pikachu", "chunky boi", 40);
    pikachu.DisplaySumUp();
    cout << "=========================\n";
    pikachu.petName = "Pika Pika";
    pikachu.Hurt(6);
    pikachu.Heal(12);
    pikachu.DisplaySumUp();
    Ability thunderShock = Ability("Thunder Shock", "Goes bzzzz", 20, 2);
    Ability gnaw = Ability("Gnaw", "Gnaws", 10);
    Ability cutie = Ability("Cutie Pie", "2 Cute 2 be true", 10);
    pikachu.LearnAbility(thunderShock);
    pikachu.LearnAbility(gnaw);
    pikachu.LearnAbility(cutie);
}

