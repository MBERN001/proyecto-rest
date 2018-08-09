#include <iostream>
#include "menu.h"
#include "pedido.h"
#include "clientes.h"
#include "menus.h"

using namespace std;

void menu() {	
	bool salir = false;
	
	while(salir == false) {
		int opcion;
		
		cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "01 - Pedido" << endl;
		cout << "02 - Clientes" << endl;
		cout << "03 - Menus" << endl;
		cout << "04 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter para ingresar --> ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				pedido();
				break;	
			case 2:
				clientes();
				break;
			case 3:
				menus();
				break;
			case 4:
				salir = true;	
			default: 		
				break;
		}
		
		 system("CLS");		
	}
}

