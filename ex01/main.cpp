#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("Noaman");

    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);


    ScavTrap scavtrap("SC4V-TP");

    scavtrap.attack("l3yoni");
    scavtrap.takeDamage(5);
    scavtrap.takeDamage(5);
    scavtrap.guardGate();

    return 0;
}
