/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:32:18 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/21 12:50:35 by emohamed         ###   ########.fr       */
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
    void (Harl::*complaintFunction)();
    void complain(std::string level) {
        std::string levels[4] = {"debug", "info", "warning", "error"};
        int i = 0;
        while(i < 4)
        {
            if (levels[i] == level)
                break;
            i++;
        }
        switch (i) {
            case 0:
                complaintFunction = &Harl::debug;
                break;
            case 1:
                complaintFunction = &Harl::info;
                break;
            case 2:
                complaintFunction = &Harl::warning;
                break;
            case 3:
                complaintFunction = &Harl::error;
                break;
            default:
            std::cout << "This is a error" << std::endl;
                return;
        }
        (this->*complaintFunction)();
    }


};
#endif

