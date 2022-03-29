// FirstCppProject.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

void Damage(int health) {
    health -= 2; 
}

void DamageReference(int& health) {
    health -= 2;
}

void DamagePointedObject(int* health) {
    *health -= 3;
}

void ShowMultiDimensionalMap()
{
    int tileMap[5][8]{ {0, 0, 0, 1, 1, 0, 0, 0},
                        {0, 0, 1, 1, 1, 1, 1, 0},
                        {0, 2, 1, 0, 1, 1, 1, 1},
                        {0, 1, 1, 1, 1, 2,1, 0},
                        {0, 0, 0, 1, 1, 1, 2, 0} };

    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 8; y++) {
            if (tileMap[x][y] == 0) {
                cout << " X ";
            }
            else if (tileMap[x][y] == 1) {
                cout << " ~ ";
            } else
            {
                cout << " O ";
            }
        }
        cout << endl;
    }
    
}


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

    ShowMultiDimensionalMap();

}

