#include "../include/Account.hpp"

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount += initial_deposit;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawal:" << this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::_displayTimestamp()
{
	time_t	curr_time = time(NULL);
	tm		*loc_tm = localtime(&curr_time);

    std::cout << "[";
	std::cout << 1900 + loc_tm->tm_year;
	loc_tm->tm_mon < 9 ? std::cout << "0" << loc_tm->tm_mon + 1 : std::cout << loc_tm->tm_mon + 1;
	loc_tm->tm_mday < 10 ? std::cout << "0" << loc_tm->tm_mday : std::cout << loc_tm->tm_mday;
	std::cout << "_";
	loc_tm->tm_hour < 9 ? std::cout << "0"<< loc_tm->tm_hour : std::cout << loc_tm->tm_hour;
	loc_tm->tm_min < 9 ? std::cout << "0" << loc_tm->tm_min : std::cout << loc_tm->tm_min;
	loc_tm->tm_sec < 9 ? std::cout << "0" << loc_tm->tm_sec : std::cout << loc_tm->tm_sec;
    std::cout << "] ";
	
}

Account::~Account()
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

int Account::getNbAccounts()
{
	return(_nbAccounts);
}

int Account::getTotalAmount()
{
	return(_totalAmount);	
}

int Account::getNbDeposits()
{
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawal:" << getNbWithdrawals() << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals= 0;
