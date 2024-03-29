#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>


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
		Bureaucrat( void );
		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif
/*
Class A {};

A a new A();

a()
*/