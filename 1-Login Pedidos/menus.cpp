#include <iostream>
#include "menus.h"

using namespace std;

void pedidos() {
	system("cls");
	
	cout << "Pantalla de pedidos :" << endl;
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
