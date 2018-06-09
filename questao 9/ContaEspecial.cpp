#include "ContaEspecial.h"
#include <iostream>

using namespace std;

void ContaEspecial::definirlimite(double sm){
    double lim;
    setLimite(3 * sm);
    cout << "O limite da conta e R$" << getLimite();
}
