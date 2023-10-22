/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:32:18 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/22 08:35:20 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
private:
    void debug(void);

    void info(void);

    void warning(void);

    void error(void);

public:
    void (Harl::*complaintFunction)();
    void complain(std::string level);
};
#endif

