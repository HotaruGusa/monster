//
// Created by li yangyi on 3/26/20.
//
#include "Sky_Monster.h"

Sky_Monster::Sky_Monster() {
    number_of_wings = rand() % 100 + 2;
    if (number_of_wings % 2 != 0) {
        number_of_wings++ ;
    }
}

Sky_Monster::Sky_Monster(int now) {
    set_number_of_wings(now);
}


int Sky_Monster::get_number_of_wings() const {
    return number_of_wings;
}

void Sky_Monster::set_number_of_wings(int now) {
    if (now < 2 || now > MAX_NUMBER_WINGS || now%2 != 0) {
        now = MAX_NUMBER_WINGS;
    }
    number_of_wings = now;
}

void Sky_Monster::growth_spurt() {
    if (number_of_wings < MAX_NUMBER_WINGS) {
        number_of_wings +=2 ;
    }
}

