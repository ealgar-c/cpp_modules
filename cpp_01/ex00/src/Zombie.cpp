#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
	// entiendo que falta algo que lo libere si no lo necesito??
	std::cout << this->name << " Died (again I guess)" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}