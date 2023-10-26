/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:42:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/26 10:35:12 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name("Emohammed") {
    std::cout << "Default constructor called" << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << name << " CREATED" << std::endl;
}
void Zombie::setName(std::string name){
    this->name = name;
}
std::string Zombie::getName(){
    return this->name;
}

void Zombie::announce(){
    std::cout << name << " anounced" << std::endl;
}
Zombie::~Zombie(){
    std::cout << "------------" << name << " DELETED "<< "------------"   << std::endl;
}