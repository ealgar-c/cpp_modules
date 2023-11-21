#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{

	private:
		Contact	contacts[8];
		int		ind;
	public:
		void	create_contact();
		void	search_contact();
		void	start_PhoneBook();
};
#endif