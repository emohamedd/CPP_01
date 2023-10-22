/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:31:42 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/22 08:35:07 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "Debug: This is Debug" << std::endl;
}

void Harl::info(void) {
    std::cout << "Info: This is Info" << std::endl;
}

void Harl::warning(void) {
    std::cout << "Warning: This is Warning" << std::endl;
}
void Harl::error(void) {
    std::cout << "Error: This is Error" << std::endl;
}

void Harl::complain(std::string level)
{
     std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        int i = 0;
        while(i < 4)
        {
            if (levels[i] == level)
                break;
            i++;
        }
        switch (i) {
            std::cout << i << std::endl;
            case 0:
            {
                std::cout << "[ " << "DEBUG" << " ]" << std::endl;
                complaintFunction = &Harl::debug;
                (this->*complaintFunction)();
            }
            case 1:
            {
                std::cout << "[ " << "INFO" << " ]" << std::endl;
                complaintFunction = &Harl::info;
                (this->*complaintFunction)();
            }
            case 2:
            {
                std::cout << "[ " << "WARNING" << " ]" << std::endl;
                complaintFunction = &Harl::warning;
                (this->*complaintFunction)();
            }
            case 3:
            {
                std::cout << "[ " << "ERROR" << " ]" << std::endl;
                complaintFunction = &Harl::error;
                (this->*complaintFunction)();
            }
            break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                return;
        }
}