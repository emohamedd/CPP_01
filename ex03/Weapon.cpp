/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:00:39 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/25 17:13:06 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    
}

Weapon::Weapon(std::string weapon) {
    this->type = weapon;
}

std::string Weapon::getType()
{
    return (this->type);
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
