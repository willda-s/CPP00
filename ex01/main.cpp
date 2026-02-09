/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:27:21 by willda-s          #+#    #+#             */
/*   Updated: 2026/02/09 17:56:37 by willda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phoneBook;
    std::string command;
    while (1)
    {
        std::cout << "\033[34mEnter command (ADD, SEARCH, EXIT): \033[0m";
        if (!std::getline(std::cin, command) || command == "EXIT")
            break;
        else if (command == "ADD")
		{
            if (!phoneBook.add_contact())
				break;
		}
        else if (command == "SEARCH")
		{
            if (!phoneBook.search_contact())
				break;
		}
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
    
    return (0);
}
