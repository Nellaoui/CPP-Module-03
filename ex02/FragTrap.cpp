#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */) : ClapTrap()
{
	std::cout << "FragTrap : Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap : Constructor Called";
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs )
{
	std::cout << "FragTrap : Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->health = rhs.getHealth();
		this->energyPoint = rhs.getEnergyPoint();
		this->attackDammage = rhs.getAttackDammage();
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << name << " 👋 " << std::endl;
}
