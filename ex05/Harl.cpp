/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:36:23 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/25 17:24:18 by ael-maar         ###   ########.fr       */
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
    void (Harl::*complaintFunction[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"debug", "info", "warning", "error"};
    int i = 0;

    while (i < 4) {
        if (levels[i] == level) {
            (this->*complaintFunction[i])();
        }
        i++;
    }
}