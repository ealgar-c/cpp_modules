#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

void	leak_check(void)
{
	std::system("leaks -q tekken");
}

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	std::atexit(leak_check);
return 0;
}