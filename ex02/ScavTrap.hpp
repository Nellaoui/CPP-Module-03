#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
// #include <iostream>
// #include <string>

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(/* args */);
	ScavTrap(const ScavTrap &copy);
	ScavTrap(const std::string name);
	~ScavTrap();
	ScavTrap &		operator=( ScavTrap const & rhs);
	void guardGate();
};




#endif
