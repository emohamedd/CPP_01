/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:21:46 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/22 09:04:36 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string charToString(char* str) {
    if (str) {
        return std::string(str);
    } else {
        return std::string();
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
    if(inputFile.peek() == -1) {
        // std::cout << inputFile.peek() << std::endl;
        std::cout << "File is empty" << std::endl;
        return 1;
    }

    if (inputFile.is_open()) {
        std::ofstream outputFile("replaced.txt");

        if (!outputFile.is_open()) {
            std::cerr << "Failed to create the output file." << std::endl;
            inputFile.close();
            return 1;
        }

        std::string line;

                while (std::getline(inputFile, line)) {
                size_t start = 0;
                size_t end;
                
                while ((end = line.find(name, start)) != std::string::npos) {
                    outputFile << line.substr(start, end - start);
                    outputFile << replace;
                    start = end + name.length();
                }
                outputFile << line.substr(start) << std::endl;
            }

        inputFile.close();
        outputFile.close();
    } else {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    return 0;
}
