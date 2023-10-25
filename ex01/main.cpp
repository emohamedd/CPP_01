/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:49:43 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/25 15:46:08 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zmb;
    int n = 6;
    zmb = zombieHorde(n, "emmd");
    for (int i; i < n; i++)
    {
        zmb[i].announce();
    }
    // delete [] zmb;
}