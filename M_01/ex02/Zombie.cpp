#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string str2, std::string str1): _type(str1), _name(str2) {
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor is called" << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")>" << "  Braiiiiiiinnnssss. . ." << std::endl;
}
