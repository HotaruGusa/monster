#include "Closet_Monster.h"
#include "Under_Bed_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int get_int_input(string prompt, string invalid, int low, int high);

int main() {

    // Create a vector of Darkness Monster unique pointers and push a variety of ten Closet Monsters and Under Bed Monsters to it.
    vector<unique_ptr<Darkness_Monster>> D_monsters;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        int k = rand() % 2;
        if (k == 1) {
            D_monsters.push_back(make_unique<Closet_Monster>());
        } else{
            D_monsters.push_back(make_unique<Under_Bed_Monster>());
        }
    }

    // Tell the user that there are monsters everywhere!
    cout << "There are monsters everywhere" << endl;

    // Loop through the vector and call the scare method on each. Print the return values.
    //     - This is polymorphism. Why? Answer in your README file.
    for (int i = 0; i < D_monsters.size(); i++) {
        cout << "Monster scares: ";
        cout << D_monsters[i]->scare() << endl;
    }

    // Repeatedly give the user options to poke the eyes or run away.
    //     - If they poke the eyes, loop through the vector and call the poke_eye method on each.
    //         - This is NOT polymorphism. Why? Answer in your README file.
    //         - After poking all the eyes, loop through the vector again and output the scare methods again.
    //     - If they choose to run away, the program ends.
    cout << "Enter 1 to poke eyes or 2 to run away: ";
    int choice;
    cin >> choice;
    while (choice != 2) {
        for (int i = 0; i < D_monsters.size(); i++) {
            D_monsters[i]->poke_eye();
        }
        for (int i = 0; i < D_monsters.size(); i++) {
            cout << D_monsters[i]->scare() << endl;
        }
        cout << "Enter 1 to poke eyes or 2 to run away: ";
        cin >> choice;
    }

    return 0;
}
