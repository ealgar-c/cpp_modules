#include "../include/Zombie.hpp"

void	leak_check(void)
{
	std::system("leaks -q zombie");
}

int	main(void)
{
	std::atexit(leak_check);	
	std::cout << "Creating first zombie ..." << std::endl;
	Zombie zombie1("paco");
	zombie1.announce();
	std::cout << "Creating second zombie ..." << std::endl;
	Zombie *zombie2 = newZombie("pepe");
	zombie2->announce();
	std::cout << "Creating third zombie ..." << std::endl;
	randomChump("jose");
	delete(zombie2);
	return (0);
}
