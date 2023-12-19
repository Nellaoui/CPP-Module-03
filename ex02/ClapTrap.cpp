#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
	name = "noaman";
	health = 100;
	energyPoint = 50;
	attackDammage = 20;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << " ClapTrap : Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(const std::string &name) : name(name) ,health(10), energyPoint(10), attackDammage(0)
{
	std::cout << " ClapTrap : Copy constructor called" << std::endl;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs )
{
	std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
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
		if (amount >= health)
			health = 0;
		else
			health = health - amount;
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
