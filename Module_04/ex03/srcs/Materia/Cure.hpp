#ifndef _Cure_HPP_
#define _Cure_HPP_

#include <iostream>
#include "AMateria.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Cure : public AMateria {
	public	:
		Cure ();
		Cure (Cure const &obj);
		~Cure ();
		Cure &operator= (const Cure &obj);
		Cure*	clone() const;
		void use(ICharacter& target);
};

#endif
