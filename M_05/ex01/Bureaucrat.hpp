#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat( void );
		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		incGrade( void );
		void		decGrade ( void );
		void		signForm(const Form& src);
		class GradeTooLowException : public std::exception
		{
				virtual const char* what() const throw();
		};
		
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};

	protected:

	private:
		int					_grade;
		const std::string	_name;
		Bureaucrat( void );
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);





#endif
/*
++a
a++
const int a = 10;
int + int; 
test"
a++
= a
a =
X a, b;

a = b 
a = Y;
b = a;
a = b
b = a

b = 0x01;
*b = 5;


this --> &object || *this --> object
Class A {
	public:
		// public attributes. (can be accessed from outside)
		void	getName( void );
	protected:
		// protected attributes. (can't be accessed from outside)
	private:
		// private attributes. (can't be accessed from outside)
};


class B: virtual public A
{

}
A a; // a.<public attribute>


A a();
A a("test");
A a(10);
A a(10f);
A a(true);
A a(B);

A a new A();

a()
*/