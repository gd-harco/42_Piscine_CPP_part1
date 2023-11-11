//
// Created by gd-harco on 11/11/23.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource {
	public:
		MateriaSource(std::string const &name);
		MateriaSource(MateriaSource const &obj);
		~MateriaSource();
		MateriaSource &operator= (const MateriaSource &obj);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
private:
		AMateria *_materia[4];
		int _materiaCount;

		MateriaSource();//private because should never be called
};



#endif //MATERIASOURCE_HPP
