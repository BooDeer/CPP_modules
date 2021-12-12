#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
   /* ======================*/
  /*  public attributes    */
 /*  ==================== */

  public:
	  /* (Con/Des)tructors */

	  FragTrap( void );      // default constructor.
	  FragTrap( std::string name);    // constructor with parameters.
	  FragTrap( const FragTrap& src ); // copy constructor.
	  ~FragTrap( void );    // destructor.

	  /* Operators overloaders */

	  FragTrap&  operator=( const FragTrap& rhs ); // assignement operator overload.

	  /* Public methods */
	  void	highFivesGuys( void );

	  
  /* ======================*/
 /*  protected attributes */
/*  ==================== */

  protected:

  /* ======================*/
 /*  private attributes   */
/*  ==================== */ 

  private:


};

#endif