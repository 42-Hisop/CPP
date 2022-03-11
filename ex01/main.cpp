#include "phonebook.hpp"

int main(void)
{
	std::string input;
	phonebook book;

	while (1)
	{
		std::cout << "1.ADD  2.SEARCH  3.EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			book.add_contact();
		else if (input == "SEARCH")
			book.search_contact();
		else if (input == "EXIT")
			break;
	}
	return (0);
}
