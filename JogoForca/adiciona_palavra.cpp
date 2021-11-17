#include <iostream>
#include <string>
#include <vector>
#include "adiciona_palavra.hpp"
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"

namespace Forca {
    void adiciona_palavra() {
        using namespace std;

        cout << endl;
        cout << "Digite uma palavra, usando letras maiúsculas." << endl;
        string nova_palavra;
        cin >> nova_palavra;

        vector<string> lista_palavras = le_arquivo();
        lista_palavras.push_back(nova_palavra);

        salva_arquivo(lista_palavras);
    }
}
