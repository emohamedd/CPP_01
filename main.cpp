/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:35:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/19 17:26:00 by emohamed         ###   ########.fr       */
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
    randomChump("miroka");
    
    delete zmbs;
    // std::cout << zombie << std::endl;
    
}