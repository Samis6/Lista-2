#include "Funcionario.h"
#include <iostream>

using namespace std;

void Funcionario::setMatricula(string m){
    matricula = m;
}

string Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(string n){
    nome = n;
}

string Funcionario::getNome(){
    return nome;
}

void Funcionario::setSalario(float s){
    salario = s;
}

float Funcionario::getSalario(){
    return salario;
}
