#include "../include/Zombie.hpp"

void	leak_check(void)
{
	std::system("leaks -q zombie_horde");
}


int	main()
{
	std::atexit(leak_check);
	std::cout << "Creating a big horde of zombies ... " << std::endl;
	Zombie *big_horde = zombieHorde(10, "pepe");
	for (int i = 0; i < 10; i++)
	{
		std::cout << "The zombie number " << i << " is going to announce itself ... " << std::endl;
		big_horde[i].announce();
	}
	delete [] big_horde;
	return (0);

}