#include <iostream>
#include "Consultor.h"
#include "Funcionario.h"

using namespace std;

int main(){
    string matm, name;
    float sal;
    int j;

    Consultor c1;
    Funcionario f1;

    cout << "Digite a matricula: ";
    cin >> matm;

    f1.setMatricula(matm);

    cout << endl;

    cout << "Digite o nome: ";
    cin >> name;

    f1.setNome(name);

    cout << endl;

    cout << "Digite o salario: ";
    cin >> sal;

    c1.setSalario(sal);

    cout << "Se for consultor digite 1: ";
    cin >> j;

    if(j == 1){
    c1.getSalario();
    }

    return 0;
}
