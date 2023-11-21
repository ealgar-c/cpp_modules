#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact{

	private:
		std::string	fname;
		std::string lname;
		std::string nickname;
		std::string secret;
		std::string	ph_nbr;
	public:
		void	add_fname(std::string str);
		void	print_fname();
		void	add_lname(std::string str);
		void	print_lname();
		void	add_nickname(std::string str);
		void	print_nickname();
		void	add_secret(std::string str);
		void	add_ph_nbr(std::string ph_nbr);
};
#endif