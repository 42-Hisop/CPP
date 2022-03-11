#include "phonebook.hpp"

void	phonebook::add_contact()
{
	static int	i = 0;
	std::string input;
	
	std::cout << "enter First Name" << std::endl;
	std::getline(std::cin, input);
	this->contacts[i].setFirstName(input);

	std::cout << "enter Last Name" << std::endl;
	std::getline(std::cin, input);
	this->contacts[i].setLastName(input);

	std::cout << "enter Nickname" << std::endl;
	std::getline(std::cin, input);
	this->contacts[i].setNickname(input);

	std::cout << "enter Phonenumber" << std::endl;
	std::getline(std::cin, input);
	this->contacts[i].setPhonenumber(input);

	std::cout << "enter Darksecret" << std::endl;
	std::getline(std::cin, input);
	this->contacts[i].setDarksecret(input);

	i = i < 7 ? i + 1 : 0;
}

void	phonebook::search_contact()
{
	int	num;
	int	in;
	std::string temp;
	std::string input;

	in = 0;
	num = 0;
	std::cout << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		temp = contacts[i].getFirstName();
		if (temp.empty())
			break;
		num++;
		std::cout << "|" << std::setw(10) << i + 1;
		if (temp.length() > 10)
			temp = temp.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << temp;
		temp = contacts[i].getLastName();
		if (temp.length() > 10)
			temp = temp.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << temp;
		temp = contacts[i].getNickname();
		if (temp.length() > 10)
			temp = temp.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << temp;
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "contact index : ";
	/*if (!(std::cin >> input))
	{
		std::cin.clear();
		std::cout << "input is not int" << std::endl;
	}
	if (!(std::cin >> input) || input < 1 || input > num)
	{
		std::cin.clear();
		std::cout << "input error" << std::endl;
	}*/
	std::getline(std::cin, input);
	in = atoi(input.c_str());
	if (in < 1 || num < in)
		std::cout << "input error" << std::endl;
	else
	{
		in = in - 1;
		std::cout << "First Name : " << contacts[in].getFirstName() << std::endl;
		std::cout << "Last Name : " << contacts[in].getLastName() << std::endl;
		std::cout << "Nickname : " << contacts[in].getNickname() << std::endl;
		std::cout << "Phone number : " << contacts[in].getPhonenumber() << std::endl;
		std::cout << "Dark Secret : " << contacts[in].getDarksecret() << std::endl;
		std::cout << std::endl;
	}
//	std::cin.ignore();
}
