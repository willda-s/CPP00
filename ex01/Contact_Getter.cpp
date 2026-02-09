/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Getter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:36:10 by williamguer       #+#    #+#             */
/*   Updated: 2026/02/08 16:33:04 by willda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
    this->_phone_number = "";
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

std::string Contact::getPhoneNumber(void) const
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
