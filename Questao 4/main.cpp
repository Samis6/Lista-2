#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"


using namespace std;

int main(){

    int Base, Altura, Raio;
	string Figurx;

	cout << "Este programa calcula a area de Figuras geometricos" << endl;



	while(true){


	cout << "Qual solido voce deseja calcular a area:" << endl;
	cin >> Figurx;

	if(Figurx == "Quadrado" || Figurx == "quadrado"){

	cout << "Digite a base do quadrado?" << endl;
	cin >> Base;
	cout << "Digite a altura do quadrado?" << endl;
	cin >> Altura;

	Quadrado Qua(Figurx, Base, Altura);


	cout << " A area do " << Qua.getNome() << " e : " << Qua.Calcularea() << endl;
	}

	else if(Figurx == "Triangulo" || Figurx == "triangulo"){
	cout << "Digite a base do triangulo?" << endl;
	cin >> Base;
	cout << "Digite a altura do triangulo?" << endl;
	cin >> Altura;

	Triangulo T(Figurx, Base, Altura);

	cout<<"A area do "<< T.getNome() << " e : " << T.Calcularea() << endl;

	} else if (Figurx == "Circulo" || Figurx == "circulo"){

	cout << "Digite o raio do seu circulo?" << endl;
	cin >> Raio;

	Circulo C(Figurx, Raio);

	cout<<"A area do "<< C.getNome() << " e : " << C.calcularea() << endl;




	}else{
		cout<<"Fim"<<endl;
		return 1;
	}

	}





	return 0;
}
