#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
ClapTrap::ClapTrap()
{
	health = 10;
	energyPoint = 10;
	attackDammage = 3;
}

ClapTrap::ClapTrap(const std::string &name) : name(name) ,health(10), energyPoint(10), attackDammage(3)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->health = rhs.getHealth();
		this->energyPoint = rhs.getEnergyPoint();
		this->attackDammage = rhs.getAttackDammage();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */

void ClapTrap::attack(const std::string& target)
{
	if (health > 0 && energyPoint > 0)
	{
		std::cout << name << " attack " << target << " deal " << attackDammage << " of helth" << std::endl;
		energyPoint--;
	}
	else
		std::cout << name << " can't attack cause of " << health << " HP & " << energyPoint << " Energy Point" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (health > 0)
	{
		std::cout << name << " takes " << amount << " of Damage " << std::endl;
	}
	else
		std::cout << name << " No more HP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (health > 0 && energyPoint > 0)
	{
		std::cout << name << " repair " << amount << " of HP " << std::endl;
		health = health + amount;
		energyPoint--;
	}
	else
		std::cout << name << "No more energy to be repaired" << std::endl;
}

const std::string &ClapTrap::getName() const
{
	return this->name;
}
unsigned int ClapTrap::getHealth() const
{
	return this->health;
}

unsigned int ClapTrap::getEnergyPoint() const
{
	return this->energyPoint;
}
unsigned int ClapTrap::getAttackDammage() const
{
	return this->attackDammage;
}
