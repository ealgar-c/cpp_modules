#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn): wpn(wpn)
{
	this->name = name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->wpn.getType() << std::endl;
}

HumanA::~HumanA()
{
}