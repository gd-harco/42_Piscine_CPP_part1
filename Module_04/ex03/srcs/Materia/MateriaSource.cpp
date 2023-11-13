//
// Created by gd-harco on 11/11/23.
//

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : _materiaCount(0){
	for (int i=0; i <4; i++)
		_materia[i] = NULL;
	std::cout << "MateriaSource : Default Constructor Called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &obj) {
	std::cout << "MateriaSource : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource : Destructor Called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
	if (this == &obj)
		return *this ;
	for (int i=0; i <4; i++)
	{
		if (_materia[i])
			delete _materia[i];
		if (obj._materia[i])
			this->_materia[i] = obj._materia[i]->clone();
	}
}
