/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:30:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/26 10:34:06 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    this->name = "emohamed";
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::setName(std::string name){
    this->name = name;
}
std::string Zombie::getName(){
    return this->name;
}

void Zombie::announce(){
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie(){
            std::cout << "------------ " <<  name <<  " DELETED "  << "------------"  << std::endl;
}