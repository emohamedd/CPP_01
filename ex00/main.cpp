/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:35:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/26 10:32:18 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zombie;
    Zombie *zmbs;
    zombie.announce();
    zmbs = newZombie("emohamed 1");
    zmbs->announce();
    randomChump("emohamed 2");

    delete zmbs;
    // std::cout << zombie << std::endl;
    
}