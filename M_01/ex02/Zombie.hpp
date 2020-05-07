#ifndef ZOMBIE_H
# define ZOMBIE_H

//#include "ZombieEvent.hpp"

#include <iostream>
#include <string>

class Zombie{


	public:
		Zombie(std::string str2, std::string str1);
		~Zombie(void);
		void	announce(void);
	private:
		std::string _type;
		std::string _name;

};


#endif
