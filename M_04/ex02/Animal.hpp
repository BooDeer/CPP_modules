#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal( void );
		AAnimal(const AAnimal& src);
		virtual ~AAnimal( void );
		AAnimal& operator=(const AAnimal& rhs);
		
		std::string getType( void ) const;
		virtual void	makeSound( void ) const = 0;
	protected:
		std::string type;
	private:
};

#endif