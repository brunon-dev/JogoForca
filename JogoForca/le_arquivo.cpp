#include <iostream>
#include <fstream>
#include "le_arquivo.hpp"

namespace Forca {
    std::vector<std::string> le_arquivo() {
        using namespace std;

        ifstream arquivo;
        arquivo.open("palavras.txt");

        if (arquivo.is_open()) {
            int quantidade_palavras;
            arquivo >> quantidade_palavras;

            vector<string> palavras_arquivo;

            for (int i = 0; i < quantidade_palavras; i++) {
                string palavra_lida;
                arquivo >> palavra_lida;
                palavras_arquivo.push_back(palavra_lida);
            }

            arquivo.close();

            return palavras_arquivo;
        }
        else {
            cout << "Não foi possível acessar o banco de palavras." << endl;
            exit(0);
        }
    }
}
