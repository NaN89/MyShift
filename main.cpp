#include "turno.h"
int main() {
    Orario a(12,15);
    Orario b(13,15);
    Turno t1("Lunedì",a,b);
    Turno t2("Martedì",a,b);
    cout << t1 << endl << t2 << endl << t1+t2 << endl;
    return 0;
}