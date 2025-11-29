/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Getter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: williamguerreiro <williamguerreiro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:36:10 by williamguer       #+#    #+#             */
/*   Updated: 2025/11/11 17:19:45 by williamguer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

Contact::Contact(void)
{
    this->_phone_number = -1;
    this->_index = -1;
    this->_first_name = "";
    this->_last_name = "";
    this->_nickname = "";
    this->_darkest_secret = "";
}

Contact::~Contact(void)
{
    return;
}

std::string Contact::getFirstName(void) const
{
    return this->_first_name;
}

std::string Contact::getLastName(void) const
{
    return this->_last_name;
}

std::string Contact::getNickname(void) const
{
    return this->_nickname;
}

long Contact::getPhoneNumber(void) const
{
    return this->_phone_number;
}

std::string Contact::getDarkestSecret(void) const
{
    return this->_darkest_secret;
}

int Contact::getIndex(void) const
{
    return this->_index;
}