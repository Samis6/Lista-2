#include "Consultor.h"
#include <iostream>

using namespace std;

void Consultor::setPercentual(float p){
    percentual = p;
}

float Consultor::getPercentual(){
    return percentual;
}

float Consultor::getSalario(){
    float novoSalario = 0.0;
    percentual = (Funcionario::getSalario() * 0.1);

    cout << "Acrescimo de 10%: " << percentual;
    cout << endl;

    novoSalario = (Funcionario::getSalario() + percentual);

    cout << "Novo salario: " << novoSalario;
    cout << endl;

    return novoSalario;
}
