#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn)
{
	this->name = name;
	this->wpn = wpn;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their" << this->wpn.getType() << std::endl;
}

HumanA::~HumanA()
{
}