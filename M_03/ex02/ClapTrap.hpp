#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );							// cannonical form
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitp, int energy, int attack);
		ClapTrap(const ClapTrap& src);				// cannonical form		
		~ClapTrap( void );							// cannonical form
		ClapTrap& operator=(const ClapTrap& rhs);	// cannonical form
		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string getName( void ) const;

	protected:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_AttackDamage;
	
	private:
	};


#endif