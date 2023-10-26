/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:42:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/25 17:05:09 by ael-maar         ###   ########.fr       */
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
    std::cout << name << " DELETED"  << std::endl;
}