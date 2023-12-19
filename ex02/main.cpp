#include "FragTrap.hpp"

int main() {
    ClapTrap claptrap("Noaman");

    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);


    FragTrap FragTrap("SC4V-TP");

    FragTrap.attack("l3yoni");
    FragTrap.takeDamage(5);
    FragTrap.takeDamage(5);
    // FragTrap.guardGate();

    return 0;
}
