#include <iostream>
#include "pedido.h"

using namespace std;

void  menus() {
	system("cls");
	
	cout << "Pantalla de menus :" << endl;
	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'N' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "N" || opcion == "n") {
			salir = true;
		}
	}
}
