#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie *zombo1 = new Zombie("ChumpChump", "dead");
	
	zombo1->announce();

	ZombieEvent *zombo2 = new ZombieEvent();
	zombo2->setZombieType("walking dead");
	zombo2->randomChump();

	Zombie *zombo3 = zombo2->newZombie("The last zombie");
	zombo3->announce();


	delete zombo1;
	delete zombo2;
	delete zombo3;

}
