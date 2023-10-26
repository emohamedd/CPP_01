/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:33:56 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/26 10:43:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int c, char **v)
{
    if (c != 2)
        std::cerr << "Usage: ./harl <filename>" << std::endl;
    if (c == 2)
    {
        Harl harl;
        harl.complain(v[1]);
        return (0);
    }
}