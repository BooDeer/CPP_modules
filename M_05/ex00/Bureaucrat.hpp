#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat( void );
		std::string	getName( void ) const;
		int			getGrade( void ) const;

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("wrong grade");
				}
		};
	protected:

	private:
		std::string	_name;
		int			_grade;
};

#endif