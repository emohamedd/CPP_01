/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:46:37 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/20 10:15:47 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &wp);
        void attack();
};
#endif