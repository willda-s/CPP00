/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:50:55 by williamguer       #+#    #+#             */
/*   Updated: 2026/02/03 23:38:08 by willda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        int _index;
    public:
        Contact(void);
        ~Contact(void);
        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickname(void) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;
        int getIndex(void) const;
        
        void setFirstName(const std::string& firstName);
        void setLastName(const std::string& lastName);
        void setNickname(const std::string& nickname);
        void setPhoneNumber(const std::string& phoneNumber);
        void setDarkestSecret(const std::string& darkestSecret);
        void setIndex(int index);
};

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _contact_count;
        int _oldest_index;
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void add_contact(void);
        void search_contact(void);
};

#endif