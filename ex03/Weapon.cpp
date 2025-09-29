#include "Weapon.hpp"

std::string	&Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string	type = '\0')
{
	this->type = type;
}

Weapon::Weapon()
{
}


Weapon::~Weapon()
{
}
