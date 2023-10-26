/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:12:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/25 17:12:25 by ael-maar         ###   ########.fr       */
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
    if (!type.empty())
    {
        std::cout << name << " attack with their " << type << std::endl; 
        return;
    }
    std::cout << name << " doesn't have a weapon" << std::endl;
}