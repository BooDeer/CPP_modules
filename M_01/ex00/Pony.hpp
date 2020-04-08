#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>

class	Pony {

	public:
		std::string	color;
		std::string	hornShape;
		std::string	flyingSpeed;
		int	numLegs;
		Pony( void );
		~Pony( void );

};


void	ponyOnTheHeap(void);
void	ponyOnTheStack( void );

#endif
