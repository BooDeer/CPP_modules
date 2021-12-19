#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public AAnimal
{
	public:
		Dog( void );
		Dog(const Dog& copy);
		~Dog( void );
		Dog& operator=(const Dog& rhs);
		void	makeSound( void ) const;
	protected:

	private:

};

#endif