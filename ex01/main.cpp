/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:49:43 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/25 17:02:40 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zmb;
    int n = 6;
    zmb = zombieHorde(n, "emmd");
    for (int i = 0; i < n; i++)
    {
        zmb[i].announce();
    }
    delete [] zmb;
}