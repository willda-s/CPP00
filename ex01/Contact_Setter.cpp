/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Setter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: williamguerreiro <williamguerreiro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:51:13 by williamguer       #+#    #+#             */
/*   Updated: 2025/11/11 17:20:25 by williamguer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

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
void Contact::setPhoneNumber(const long& phoneNumber) 
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