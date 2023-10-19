/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:26:36 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/19 17:24:19 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie{
private:
        std::string name;
public:
    Zombie();
    Zombie(std::string name);
    std::string getName();
    void setName(std::string name);
    void announce();
    ~Zombie();
};
    Zombie* newZombie( std::string name);
    void randomChump( std::string name );
#endif