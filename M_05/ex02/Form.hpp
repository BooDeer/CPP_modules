#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Bureaucrat;
class Form
{
	public:
		Form(const Form& src);
		Form(std::string name, int execGrade, int signGrade);
		~Form( void );
		Form& operator=(const Form& rhs);
		std::string	getName( void ) const;
		int			getExecGrade( void ) const;
		int			getSignGrade( void ) const;
		bool		getSigned( void ) const;
		void		beSigned(Bureaucrat& src);
		virtual void		executeForm(Form const& form) const = 0;

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
	protected:

	private:
		Form( void );
		const std::string	_name;
		const int			_execGrade;
		const int			_signGrade;
		bool				_signed;
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);


#endif