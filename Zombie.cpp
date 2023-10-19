/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:30:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/19 16:06:26 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    this->name = "emohamed";
}
void Zombie::setName(std::string name){
    this->name = name;
}
std::string Zombie::getName(){
    return this->name;
}

void Zombie::announce(){
    std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie(){
            std::cout << name << " DELETED"  << std::endl;
}