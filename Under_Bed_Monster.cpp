#include "Under_Bed_Monster.h"
using namespace std;

Under_Bed_Monster::Under_Bed_Monster() : Darkness_Monster() {
}

Under_Bed_Monster::Under_Bed_Monster(int noe) : Darkness_Monster(noe) {
}

// TODO: implement the scare method here
string Under_Bed_Monster::scare() {
    if (rand() % 2) {
        if (number_of_eyes == 1) {
            return "1 eyes watching and counting";
        }
        return to_string(number_of_eyes) + " eyes watching and counting";
    }
    return "you're gonna need a stronger body";
}