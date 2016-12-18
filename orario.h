//
// Created by nan on 18/12/16.
//

#ifndef MYSHIFT_ORARIO_H
#define MYSHIFT_ORARIO_H


#include <iostream>
#include <string>
using std :: cout;
using std :: endl;

class Orario {
    friend std::ostream &operator<<(std::ostream &, const Orario &);
private:
    unsigned short int minuti;
public:
    Orario(unsigned short int = 0, unsigned short int = 0);
    unsigned short int get_ore() const;
    unsigned short int get_minuti() const;
    Orario operator+(const Orario &) const;
    Orario operator-(const Orario &) const;
};


#endif //MYSHIFT_ORARIO_H
