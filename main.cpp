/* Author : Hermann Kenko Tanfoudie 
 * ID#   : 017639193
*Homework9 _ ETE-1151-02 C++
*Description: This program 
*Date: 11/16/2024*/

#include <iostream>
#include <string>

class Adventurer {
public:
    // Basic attack with no parameters
    void attack() const {
        std::cout << "Performing a basic attack on the rock!" << std::endl;
    }

    // Attack with specified damage
    void attack(int damage) const {
        std::cout << "Performing an attack on the rock with " << damage << " damage!" << std::endl;
    }

    // Magical attack with spell name and damage value
    void attack(const std::string& spell, int damage) const {
        std::cout << "Performing a magical attack with " << spell << " dealing " << damage << " damage to the rock!" << std::endl;
    }
};

int main() {
    Adventurer Hermann;

    // Basic attack
    Hermann.attack();

    // Attack with specified damage
    Hermann.attack(50);

    // Magical attack with spell name and damage value
    Hermann.attack("Fireball", 100);

    return 0;
}
