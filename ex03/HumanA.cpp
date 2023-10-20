/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:12:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/20 10:01:29 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : weapon(wp){
    this->name = name;
    // this->weapon = wp;
}

void HumanA::attack()
{
    std::string type = weapon.getType();
    // HumanA Humanb(this->name, wp);
    std::cout << name << " attack with their " << type << std::endl; 
}