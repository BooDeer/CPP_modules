#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
   /* ======================*/
  /*  public attributes    */
 /*  ==================== */

  public:
	  /* (Con/Des)tructors */

	  DiamondTrap( void );      // default constructor.
	  DiamondTrap( std::string name );    // constructor with parameters.
	  DiamondTrap( const DiamondTrap& src ); // copy constructor.
	  ~DiamondTrap( void );    // destructor.

	  /* Operators overloaders */

	  DiamondTrap&  operator=( const DiamondTrap& rhs ); // assignement operator overload.

	  /* Public methods */

	  
  /* ======================*/
 /*  protected attributes */
/*  ==================== */

  protected:

  /* ======================*/
 /*  private attributes   */
/*  ==================== */ 

  private:
		std::string _name; 

};

#endif