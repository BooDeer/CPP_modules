#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent {

	public:
		ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void	randomChump(void);
		~ZombieEvent(void);
	private:
		std::string _type;
};


#endif
