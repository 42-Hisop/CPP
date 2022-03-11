#include "phonebook.hpp"

void	contact::setFirstName(std::string str)
{
	this->FirstName = str;
}

void	contact::setLastName(std::string str)
{
	this->LastName = str;
}

void	contact::setNickname(std::string str)
{
	this->Nickname = str;
}

void	contact::setPhonenumber(std::string str)
{
	this->Phonenumber = str;
}

void	contact::setDarksecret(std::string str)
{
	this->Darksecret = str;
}

std::string		contact::getFirstName()
{
	return (this->FirstName);
}

std::string		contact::getLastName()
{
	return (this->LastName);
}

std::string		contact::getNickname()
{
	return (this->Nickname);
}

std::string		contact::getPhonenumber()
{
	return (this->Phonenumber);
}

std::string		contact::getDarksecret()
{
	return (this->Darksecret);
}
