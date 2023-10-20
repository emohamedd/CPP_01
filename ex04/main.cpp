/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:21:46 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/20 13:38:13 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string charToString(char* str) {
    if (str) {
        return std::string(str);
    } else {
        return std::string(); // Return an empty string if the char* is null
    }
}

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " input_file old_word new_word" << std::endl;
        return 1;
    }

    std::ifstream inputFile(av[1]);
    std::string name = charToString(av[2]);
    std::string replace = charToString(av[3]);

    if (inputFile.is_open()) {
        std::string line;

        while (std::getline(inputFile, line)) {
            size_t startPos = 0;
            while ((startPos = line.find(name)) != std::string::npos) {
                line.replace(startPos, name.length(), replace);
                startPos += replace.length();
            }

            std::cout << line << std::endl;
        }

        inputFile.close();
    } else {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    return 0;
}
