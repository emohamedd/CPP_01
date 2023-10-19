/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:35:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/19 16:07:43 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zombie;
    Zombie *zmbs;
    zombie.announce();
    zmbs = newZombie("Reda");
    zmbs->announce();
    delete zmbs;
    // std::cout << zombie << std::endl;
    
}