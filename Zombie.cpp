/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:30:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/19 12:44:51 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::getName(){
    return this->name;
}

void Zombie::setName(std::string name){
    this->name = name;
}

void Zombie::announce(){
    std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}