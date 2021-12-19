#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public AAnimal
{
	public:
		Cat( void );
		Cat(const Cat& src);
		~Cat( void );
		Cat& operator=(const Cat& rhs);
		void	makeSound( void ) const;
	protected:

	private:

};

#endif