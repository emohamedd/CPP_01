/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:32:18 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/21 21:52:59 by emohamed         ###   ########.fr       */
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


};
#endif

