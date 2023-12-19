#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"
// #include <iostream>
// #include <string>

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(/* args */);
	FragTrap(const FragTrap &copy);
	FragTrap(const std::string name);
	~FragTrap();
	FragTrap &		operator=( FragTrap const & rhs);
	void highFivesGuys(void);};




#endif
