/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: williamguerreiro <williamguerreiro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:50:55 by williamguer       #+#    #+#             */
/*   Updated: 2025/11/11 17:19:26 by williamguer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        long _phone_number;
        std::string _darkest_secret;
        int _index;
    public:
        Contact(void);
        ~Contact(void);
        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickname(void) const;
        long getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;
        int getIndex(void) const;
        
        void setFirstName(const std::string& firstName);
        void setLastName(const std::string& lastName);
        void setNickname(const std::string& nickname);
        void setPhoneNumber(const long& phoneNumber);
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