#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <stdlib.h>


ZombieEvent::ZombieEvent(void)
{
	std::cout << "Constructor is called" << std::endl;
	this->_type = "Default";
	return ;
}
void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
	return ;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *newZombie = new Zombie(name, this->_type);
	return (newZombie);
}
void	ZombieEvent::randomChump(void) {

	srand(time(0));	
	std::string passione[6] = { "Giorno Giovanna" , "Bruno Bucciarati", "Narancia Ghirga", "Leone Abbacchio", "Guido Mista", "Trish Una"};
	Zombie *chumpChump = ZombieEvent::newZombie(passione[rand()%(6)]);
	chumpChump->announce();
	delete chumpChump;
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}
