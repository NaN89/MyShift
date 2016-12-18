//
// Created by nan on 18/12/16.
//

#ifndef MYSHIFT_TURNO_H
#define MYSHIFT_TURNO_H
#include "orario.h"

class Turno {   //relazione has-a
    friend std :: ostream &operator<<(std :: ostream &, const Turno &);
private:
    std::string giorno;
    Orario inizio, fine;
public:
    Turno(std::string = "Lunedì", const Orario & = 0, const Orario & = 0);
    Orario durata() const;
    Orario operator+(const Turno &) const;
};


#endif //MYSHIFT_TURNO_H
