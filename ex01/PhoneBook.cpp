/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:52:05 by williamguer       #+#    #+#             */
/*   Updated: 2026/02/03 23:49:57 by willda-s         ###   ########.fr       */
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

std::string truncate(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

bool is_digits(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

void PhoneBook::add_contact(void)
{
    std::string input, first_name, last_name, nickname, phone_number, darkest_secret;
    int index = _oldest_index;

    std::cout << "\033[35mEnter First Name: \033[0m";
    std::getline(std::cin, first_name);

    std::cout << "\033[35mEnter Last Name: \033[0m";
    std::getline(std::cin, last_name);

    std::cout << "\033[35mEnter Nickname: \033[0m";
    std::getline(std::cin, nickname);

    std::cout << "\033[35mEnter Phone Number: \033[0m";
    std::getline(std::cin, phone_number);
    std::cout << "\033[35mEnter Darkest Secret: \033[0m";
    std::getline(std::cin, darkest_secret);

    if (!is_digits(phone_number))
    {
        std::cout << "Invalid phone number. It should contain only digits." << std::endl;
        return;
    }
    if (first_name.empty() || last_name.empty() || nickname.empty() ||
        phone_number.empty() || darkest_secret.empty())
    {
        std::cout << "Error: All fields must be filled. Contact not added." << std::endl;
        return;
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
}

static int stoi( std::string & s ) 
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

void PhoneBook::search_contact(void)
{
    std::string input;
    int index;

    if (_contact_count == 0)
    {
        std::cout << "PhoneBook is empty. Please add a contact first." << std::endl;
        return;
    }
    for (int i = 0; i < _contact_count && i < 8; i++)
    {
        std::cout << std::setw(10) << _contacts[i].getIndex() << "|"
                    << std::setw(10) << truncate(_contacts[i].getFirstName()) << "|"
                    << std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
                    << std::setw(10) << truncate(_contacts[i].getNickname()) << std::endl;
    }
    std::cout << "\033[32mEnter index of the contact to view details: \033[0m";
    std::getline(std::cin, input);
    if (!is_digits(input))
    {
        std::cout << "Invalid input! Please enter a valid index number." << std::endl;
        return;
    }
    if (input.empty())
    {
        std::cout << "No input provided!" << std::endl;
        return;
    }
    index = stoi(input);
    if (index >= 0 && index < _contact_count)
    {
        std::cout << "\033[32mFirst Name: \033[0m" << _contacts[index].getFirstName() << std::endl;
        std::cout << "\033[32mLast Name: \033[0m" << _contacts[index].getLastName() << std::endl;
        std::cout << "\033[32mNickname: \033[0m" << _contacts[index].getNickname() << std::endl;
        std::cout << "\033[32mPhone: \033[0m" << _contacts[index].getPhoneNumber() << std::endl;
        std::cout << "\033[32mSecret: \033[0m" << _contacts[index].getDarkestSecret() << std::endl;
    }
    else
        std::cout << "Invalid index!" << std::endl;
}