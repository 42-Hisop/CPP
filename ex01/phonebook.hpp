#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class contact
{
	public:
			void	setFirstName(std::string str);
			void	setLastName(std::string str);
			void	setNickname(std::string str);
			void	setPhonenumber(std::string str);
			void	setDarksecret(std::string str);

			std::string		getFirstName();
			std::string		getLastName();
			std::string		getNickname();
			std::string		getPhonenumber();
			std::string		getDarksecret();

	private:
			std::string		FirstName;
			std::string		LastName;
			std::string		Nickname;
			std::string		Phonenumber;
			std::string		Darksecret;
};

class phonebook
{
	public:
			void	add_contact();
			void	search_contact();

	private:
			contact contacts[8];
};

#endif
