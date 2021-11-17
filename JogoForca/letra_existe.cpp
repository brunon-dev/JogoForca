#include <string>
#include "letra_existe.hpp"

namespace Forca {
    bool letra_existe(std::string palavra_secreta, char chute) {
        // passa a usar looping do C++ 11 usando a flag "-std=c++11" (ver Makefile)
        for (char letra : palavra_secreta) {
            if (chute == letra) {
                return true;
            }
        }

        return false;
    }
}
