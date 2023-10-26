/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:07:20 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/26 10:37:41 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
    std::string brain;
    brain =  "HI THIS IS BRAIN";
    
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "The address of brain: " << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << &brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of brain: " << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

}