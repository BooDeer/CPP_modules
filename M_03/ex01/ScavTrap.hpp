#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( const ScavTrap& src);
		~ScavTrap( void );
		ScavTrap& operator=(const ScavTrap& rhs);
	protected:

	private:
};
#endif