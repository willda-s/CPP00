/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:27:27 by willda-s          #+#    #+#             */
/*   Updated: 2026/02/09 18:02:42 by willda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_contact_count = 0;
    this->_oldest_index = 0;
}

PhoneBook::~PhoneBook(void)
{
    return;   
}

std::string ft_truncate(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

bool ft_isdigit(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

bool PhoneBook::add_contact(void)
{
	if (std::cin.eof())
		return(false);
		
    std::string input, first_name, last_name, nickname, phone_number, darkest_secret;
    int index = _oldest_index;

    std::cout << "\033[35mEnter First Name: \033[0m";
    if (!std::getline(std::cin, first_name)|| std::cin.eof())
		return (false);
    std::cout << "\033[35mEnter Last Name: \033[0m";
    if (!std::getline(std::cin, last_name) || std::cin.eof())
		return (false);
    std::cout << "\033[35mEnter Nickname: \033[0m";
    if (!std::getline(std::cin, nickname) || std::cin.eof())
		return (false);
    std::cout << "\033[35mEnter Phone Number: \033[0m";
    if (!std::getline(std::cin, phone_number) || std::cin.eof())
		return (false);
    std::cout << "\033[35mEnter Darkest Secret: \033[0m";
    if (!std::getline(std::cin, darkest_secret) || std::cin.eof())
		return (false);

    if (!ft_isdigit(phone_number))
    {
        std::cout << "Invalid phone number. It should contain only digits." << std::endl;
        return (true);
    }
    if (first_name.empty() || last_name.empty() || nickname.empty() ||
        phone_number.empty() || darkest_secret.empty())
    {
        std::cout << "Error: All fields must be filled. Contact not added." << std::endl;
        return (true);
    }
    if (_contact_count < 8)
        _contact_count++;
    _oldest_index = (_oldest_index + 1) % 8;

    _contacts[index].setFirstName(first_name);
    _contacts[index].setLastName(last_name);
    _contacts[index].setNickname(nickname);
    _contacts[index].setPhoneNumber(phone_number);
    _contacts[index].setDarkestSecret(darkest_secret);
    _contacts[index].setIndex(index);
	return (true);
}

static int ft_stoi( std::string & s) 
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

bool PhoneBook::search_contact(void)
{
	if (std::cin.eof())
		return (false);
    std::string input;
    int index;

    if (_contact_count == 0)
    {
        std::cout << "PhoneBook is empty. Please add a contact first." << std::endl;
        return (true);
    }
    for (int i = 0; i < _contact_count && i < 8; i++)
    {
        std::cout << _contacts[i].getIndex() << "|"
                 << ft_truncate(_contacts[i].getFirstName()) << "|"
                 << ft_truncate(_contacts[i].getLastName()) << "|"
                 << ft_truncate(_contacts[i].getNickname()) << std::endl;
    }
    std::cout << "\033[32mEnter index of the contact to view details: \033[0m";
    if (!std::getline(std::cin, input) || std::cin.eof())
		return (false);
    if (!ft_isdigit(input))
    {
        std::cout << "Invalid input! Please enter a valid index number." << std::endl;
        return (true);
    }
    if (input.empty())
    {
        std::cout << "No input provided!" << std::endl;
        return (true);
    }
    index = ft_stoi(input);
    if (index >= 0 && index < _contact_count)
    {
        std::cout << "\033[32mFirst Name: \033[0m" << _contacts[index].getFirstName() << std::endl;
        std::cout << "\033[32mLast Name: \033[0m" << _contacts[index].getLastName() << std::endl;
        std::cout << "\033[32mNickname: \033[0m" << _contacts[index].getNickname() << std::endl;
        std::cout << "\033[32mPhone: \033[0m" << _contacts[index].getPhoneNumber() << std::endl;
        std::cout << "\033[32mSecret: \033[0m" << _contacts[index].getDarkestSecret() << std::endl;
    }
    else
	{
        std::cout << "Invalid index!" << std::endl;
		return (true);
	}
	return (true);
}
