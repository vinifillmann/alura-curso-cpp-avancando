#include<iostream>
#include<vector>
#include "./imprime_erros.hpp"

void imprime_erros(std::vector<char> chutes_errados){
    std::cout << "Chutes errados: ";
    for(char letra: chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}