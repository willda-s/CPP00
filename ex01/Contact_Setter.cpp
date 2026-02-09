/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Setter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:27:17 by willda-s          #+#    #+#             */
/*   Updated: 2026/02/08 16:33:06 by willda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

void Contact::setFirstName(const std::string& firstName)
{ 
    this->_first_name = firstName; 
}

void Contact::setLastName(const std::string& lastName) 
{ 
    this->_last_name = lastName; 
}
void Contact::setNickname(const std::string& nickname) 
{ 
    this->_nickname = nickname; 
}
void Contact::setPhoneNumber(const std::string& phoneNumber) 
{ 
    this->_phone_number = phoneNumber; 
}
void Contact::setDarkestSecret(const std::string& darkestSecret) 
{ 
    this->_darkest_secret = darkestSecret;
}
void Contact::setIndex(int index) 
{ 
    this->_index = index; 
}
