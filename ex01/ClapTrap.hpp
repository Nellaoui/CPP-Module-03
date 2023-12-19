#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected :
		std::string name;
		unsigned int	health;
		unsigned int	energyPoint;
		unsigned int	attackDammage;
	public:

		ClapTrap();
		ClapTrap( const std::string &name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs);
		const std::string &getName() const;
		unsigned int getHealth() const;
		unsigned int getEnergyPoint() const;
		unsigned int getAttackDammage() const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
