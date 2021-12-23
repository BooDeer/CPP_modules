/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:35:57 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/23 21:18:57 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public:
		virtual ~Base( void );
};
Base::~Base( void ){}

class A: public Base {};

class B: public Base {};

class C: public Base{};

Base*	generate( void )
{
	int	random;

	srand((unsigned int)time(NULL));
	random = rand() % 3;

	std::cout << "The randomly generated number: " << random << std::endl;

	switch (random)
	{
	case 0:
		return dynamic_cast<Base *>(new A());
		break;
	case 1:
		return dynamic_cast<Base *>(new B());
		break;
	case 2:
		return dynamic_cast<Base *>(new C());
		break;
	default:
		break;
	}
	return NULL;
}

void	identify(Base *p)
{
	A *tryA;
	B *tryB;
	C *tryC;

	tryA = dynamic_cast<A *>(p);
	if (tryA == nullptr)
	{
		tryB = dynamic_cast<B *>(p);
		if (tryB == nullptr)
			std::cout << "C" << std::endl;
		else
			std::cout << "B" << std::endl;
	}
	else
		std::cout << "A" << std::endl;
	return ;
}

void	identify(Base& p)
{
	A tryA;
	B tryB;
	C tryC;

	
	try
	{
		tryA = dynamic_cast<A&>(p);	
	}
	catch(const std::exception &e)
	{
		try
		{
			tryB = dynamic_cast<B &>(p);
		}
		catch(const std::exception &e)
		{
			std::cout << "C" << std::endl;
			return ;
		}
		std::cout << "B" << std::endl;
		return ;
	}
	std::cout << "A" << std::endl;
	return ;
}

int main ( void )
{
	Base *ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	return (0);
}