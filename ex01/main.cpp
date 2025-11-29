/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: williamguerreiro <williamguerreiro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:59:24 by williamguer       #+#    #+#             */
/*   Updated: 2025/11/11 16:19:07 by williamguer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

int main(void)
{
    PhoneBook phoneBook;
    std::string command;
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command) || command == "EXIT")
            break;
        else if (command == "ADD")
            phoneBook.add_contact();
        else if (command == "SEARCH")
            phoneBook.search_contact();
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
    
    return (0);
}
/*
Analogie :

Sans & : On vous donne une photocopie du document
Avec & : On vous montre le document original
Avec const & : On vous montre le document original, mais vous ne pouvez que le lire
*/