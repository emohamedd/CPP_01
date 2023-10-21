/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:11:23 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/21 12:28:02 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
private:
    void debug(void) {
        std::cout << "Debug: This is Debug" << std::endl;
    }

    void info(void) {
        std::cout << "Info: This is info" << std::endl;
    }

    void warning(void) {
        std::cout << "Warning: This is a warning" << std::endl;
    }

    void error(void) {
        std::cout << "Error: This is a error" << std::endl;
    }

public:
    void complain(std::string level) {
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


};



#endif