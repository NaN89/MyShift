//
// Created by nan on 18/12/16.
//

#include "turno.h"

Turno::Turno(std::string g, const Orario &o1, const Orario &o2) :
        giorno(g), inizio(o1), fine(o2) {
    if(g != "Lunedì" && g != "Martedì" && g != "Mercoledì" && g != "Giovedì" && g != "Venerdì" && g != "Sabato" && g != "Domenica") {
        giorno = "Lunedì";
    }
}

Orario Turno::durata() const {
    return (fine - inizio);
}

Orario Turno::operator+(const Turno &t) const {
    Orario aux;
    aux = durata() + t.durata();
    return aux;
}

std::ostream &operator<<(std::ostream &os, const Turno &t) {
    return os << t.giorno << " " << t.inizio << " - " << t.fine;
}