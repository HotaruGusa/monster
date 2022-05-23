#include "Cloud_Monster.h"
#include "Comet_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int main() {
    /*
     *  Use polymorphism in a program of your choice, utilizing at least ten objects of the Cloud and Comet Monster classes.
     */
    vector<unique_ptr<Sky_Monster>> S_monsters;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        int k = rand() % 2;
        if (k == 1) {
            S_monsters.push_back(make_unique<Cloud_Monster>());
        } else{
            S_monsters.push_back(make_unique<Comet_Monster>());
        }
    }

    // Tell the user that there are monsters everywhere!
    cout << "There are monsters everywhere" << endl;


    for (int i = 0; i < S_monsters.size(); i++) {
        cout << "Monster scares: ";
        cout << S_monsters[i]->scare() << endl;
    }

    cout << "Enter 1 to add one more sky monster or 2 to run away: ";
    int choice;
    cin >> choice;
    while (choice != 2) {
        for (int i = 0; i < S_monsters.size(); i++) {
            S_monsters[i]->growth_spurt();
        }
        for (int i = 0; i < S_monsters.size(); i++) {
            cout << S_monsters[i]->scare() << endl;
        }
        cout << "Enter 1 to add one more sky monster or 2 to run away: ";
        cin >> choice;
    }
    return 0;
}

