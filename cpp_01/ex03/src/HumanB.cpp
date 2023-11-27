#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &wpn)
{
	this->wpn = &wpn;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->wpn->getType() << std::endl;
}