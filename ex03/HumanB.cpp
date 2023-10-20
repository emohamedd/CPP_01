/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:03:38 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/20 10:16:48 by emohamed         ###   ########.fr       */
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
    std::string type = weapon->getType();
    std::cout << name << " attack with their " << type << std::endl; 
}