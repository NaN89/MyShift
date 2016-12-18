//
// Created by nan on 18/12/16.
//

#include "orario.h"

Orario::Orario(unsigned short int o, unsigned short int m) :
        minuti((o * 60) + m) {
    if(o > 23 || m > 59)
        minuti = 0;
}

unsigned short int Orario::get_ore() const {
    return (minuti / 60);
}

unsigned short int Orario::get_minuti() const {
    return (minuti % 60);
}

Orario Orario::operator+(const Orario &o) const {
    Orario aux;
    aux.minuti = minuti + o.minuti;
    return aux;
}

Orario Orario::operator-(const Orario &o) const {
    Orario aux;
    aux.minuti = minuti - o.minuti;
    return aux;
}

std::ostream &operator<<(std::ostream &os, const Orario &o) {
    return os << o.get_ore() << ":" << o.get_minuti();
}