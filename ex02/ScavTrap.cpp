#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */) : ClapTrap()
{
	std::cout << "ScavTrap : Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap : Constructor Called";
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs )
{
	std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->health = rhs.getHealth();
		this->energyPoint = rhs.getEnergyPoint();
		this->attackDammage = rhs.getAttackDammage();
	}
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << name << " ScavTrap is now in Gate keeper mode." << std::endl;
}
