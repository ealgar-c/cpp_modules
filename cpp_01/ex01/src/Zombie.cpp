#include "../include/Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie()
{
	std::cout << this->name << " Died (again I guess)" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::name_your_zombie(std::string name){
	this->name = name;
}