#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
	public:
		HumanA (std::string name, Weapon& weapon);
		Weapon&	weapon;
		void	attack( void );

};
#endif