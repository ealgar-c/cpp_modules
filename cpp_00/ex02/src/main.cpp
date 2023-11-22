#include "../include/Account.hpp"

int main()
{
	Account	test(23);
	Account	test2(45);
	Account	test3(45445);
	Account	test4(5665);

	test.displayStatus();
	test2.displayStatus();
	test3.displayStatus();
	test4.displayStatus();
	test.makeDeposit(20);
	test2.makeDeposit(25);
	test3.makeDeposit(30);
	test4.makeDeposit(35);
	test.displayStatus();
	test2.displayStatus();
	test3.displayStatus();
	test4.displayStatus();


	return (0);
}