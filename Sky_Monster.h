//
// Created by li yangyi on 3/26/20.
//

#ifndef PROJECT5ALTERNATE_SKY_MONSTER_H
#define PROJECT5ALTERNATE_SKY_MONSTER_H
#include <string>

class Sky_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: sets number_of_eyes to a random int in range 2-100
     */
    Sky_Monster();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Sky_Monster() = default;

    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: calls set_number_of_wings with now
     */
    explicit Sky_Monster(int now);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns number_of_wings
     */
    virtual int get_number_of_wings() const;

    /**
     * Requires: nothing
     * Modifies: number_of_wings 
     * Effects: sets number_of_wings to now
     */
    void set_number_of_wings(int noe);


    // pure virtual method to return a scary string
    virtual std::string scare() = 0;

    /**
    * Requires: nothing
    * Modifies: number_of_wings 
    * Effects: add number_of_wings 
    */
    void growth_spurt();

    static const int MAX_NUMBER_WINGS = 100;
protected:
    int number_of_wings;
};
#endif //PROJECT5ALTERNATE_SKY_MONSTER_H
