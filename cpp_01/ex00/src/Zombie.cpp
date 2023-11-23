#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}

Zombie::~Zombie(){
	// entiendo que falta algo que lo libere si no lo necesito??
	std::cout << this->name << " Died (again I guess)";
}