#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShruberryCreationForm: public Form
{
	public:
		ShruberryCreationForm(std::string target);
		ShruberryCreationForm(const ShruberryCreationForm& src);
		~ShruberryCreationForm( void );
		ShruberryCreationForm& operator=(const ShruberryCreationForm& rhs);
	
	private:
		ShruberryCreationForm( void );
};
#endif