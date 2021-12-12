 #ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap(const std::string name);
		ScavTrap( const ScavTrap& src);
		~ScavTrap( void );
		ScavTrap& operator=(const ScavTrap& rhs);
		
		void	attack(std::string name);
		void	guardGate( void );
	protected:

	private:
};
#endif