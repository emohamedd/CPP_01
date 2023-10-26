/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:03:38 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/25 17:11:55 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
}

void HumanB::setWeapon(Weapon &wp) {
    this->weapon = &wp;
}

void HumanB::attack()
{
    if (weapon == NULL)
    {
        std::cout << name << " doesn't have a weapon" << std::endl;
        return;
    }
    std::string type = weapon->getType();
    std::cout << name << " attack with their " << type << std::endl; 
}