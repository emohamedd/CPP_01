/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:00:39 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/20 10:04:50 by emohamed         ###   ########.fr       */
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
    this->type =  type;
}
