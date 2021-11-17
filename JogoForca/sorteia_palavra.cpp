#include <vector>
#include <ctime>
#include <cstdlib>
#include "sorteia_palavra.hpp"
#include "le_arquivo.hpp"

std::string Forca::sorteia_palavra() {
    std::vector<std::string> lista_palavras = le_arquivo();
    
    srand((unsigned)time(NULL));
    int indice_sorteado = rand() % lista_palavras.size();

    return lista_palavras[indice_sorteado];
}