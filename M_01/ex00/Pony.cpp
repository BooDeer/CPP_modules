#include "Pony.hpp"

Pony::Pony(void)
{
	this->color = "red";
	this->hornShape = "star";
	this->flyingSpeed = "fast";
	this->numLegs = 42;
}

Pony::~Pony(void)
{
	std::cout << "Pony out" << std::endl;
}
void	ponyOnTheStack(void) {
	
	Pony newpony;
	
	std::cout << "The pony in the stack is " <<  newpony.color << std::endl;
	std::cout << "and its horn is " << newpony.hornShape << std::endl;
	std::cout << "it can go so " << newpony.flyingSpeed << std::endl;
	std::cout << "it has " << newpony.numLegs << " legs" << std::endl;
	
}

void	ponyOnTheHeap(void)
{

	Pony *newpony = new Pony();
	
	std::cout << "The pony in the heap is " <<  newpony->color << std::endl;
	std::cout << "and its horn is " << newpony->hornShape << std::endl;
	std::cout << "it can go so " << newpony->flyingSpeed << std::endl;
	std::cout << "it has " << newpony->numLegs << " legs" << std::endl;

	delete newpony;
}
