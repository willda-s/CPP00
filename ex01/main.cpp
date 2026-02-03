/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:59:24 by williamguer       #+#    #+#             */
/*   Updated: 2026/02/03 23:49:20 by willda-s         ###   ########.fr       */
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
            phoneBook.add_contact();
        else if (command == "SEARCH")
            phoneBook.search_contact();
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
    
    return (0);
}
