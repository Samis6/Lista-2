#include <iostream>
#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"


int main(){
	
	string nome, esp;
	float altura = 0.0;
	float peso = 0.0;

	cout << "OBS: SE HOUVER ALGUM ERRO DE DIGITACAO NO PROGRAMA, ELE IRÁ SE ENCERRAR. OBRIGADO"<< endl;
	while(true){
	cout << endl;
	cout << "Qual nome do medico? " << endl;
	cin >> nome;
	cout << "Qual sua altura? " << endl;
	cin >> altura;
	cout << "Qual seu peso ?" << endl;
	cin >> peso;
	cout << "Qual sua especialidade" << endl;
	cin >> esp;

	if (esp == "Cirurgiao" || esp == "cirurgiao"){
	
	Cirurgiao C(nome, altura, peso, esp);
		
		cout << endl;
		cout << "Nome:   " << C.getNome() << endl;
		cout << "Altura: " << C.getAltura() << endl;
		cout << "Peso:   " << C.getPeso() << endl;
		cout << "Especialidade:  " << C.getEspecialidade() << endl;
	
		cout << C.realizaCirurgia() << endl;
	
	
	}else if (esp == "Oftalmologista" || esp == "oftalmologista"){
	
	Oftalmologista O(nome, altura, peso, esp);
	
		cout << endl;
		cout << "Nome:   " << O.getNome() << endl;
		cout << "Altura: " << O.getAltura() << endl;
		cout << "Peso:   " << O.getPeso() << endl;
		cout << "Especialidade:  " << O.getEspecialidade() << endl;
	
		cout << O.realizaCirurgia() << endl;




	}else if (esp == "Otorrino" || esp == "Otorrino"){
	
	Otorrino Ot(nome, altura, peso, esp);
	
		cout << endl;
		cout << "Nome:   " << Ot.getNome() << endl;
		cout << "Altura: " << Ot.getAltura() << endl;
		cout << "Peso:   " << Ot.getPeso() << endl;
		cout << "Especialidade:  " << Ot.getEspecialidade() << endl;
	
		cout << Ot.realizaCirurgia() << endl;




	}else if (esp == "Ginecologista" || esp == "ginecologista"){
	
	Ginecologista G(nome, altura, peso, esp);
	
		cout << endl;
		cout << "Nome:   " << G.getNome() << endl;
		cout << "Altura: " << G.getAltura() << endl;
		cout << "Peso:   " << G.getPeso() << endl;
		cout << "Especialidade:  " << G.getEspecialidade() << endl;
	
		cout << G.realizaCirurgia() << endl;




	}else {
	
	cout << "OBG POR USAR NOSSO PROGRAMA" << endl;
	return 1;

	}
	}
	return 0;
}
