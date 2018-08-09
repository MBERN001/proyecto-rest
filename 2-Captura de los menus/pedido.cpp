#include <iostream>
#include "pedido.h"
#include "mensajes.h"
#include "clientes.h"
#include "menus.h"

using namespace std;

void rentar() {
	system("cls");
	
	cout << "PEDIDOS" << endl;
	cout << "------" << endl;
	saltosDeLinea(3);	
	
	bool salir = false;
	
	while(salir == false) {		 
		system("cls");   			
		// CLIENTE
		string codigoCliente;
		string nombreCliente;
		if (buscarCliente(codigoCliente, nombreCliente) == false) {
			return;
		}
		
		system("cls");   	
		// JUEGO
		string codigoMenu;
		string descripcionMenu;
		if (buscarMenu(codigoMenu, descripcionMenu) == false) {
			return;
		}	
		
		system("cls");
		mensajeEnConsola("Menu Solicitado");
		mensajeEnConsola("-------------");
		mensajeEnConsola("Codigo Cliente " + codigoCliente);
		mensajeEnConsola("-->" + nombreCliente);
		saltosDeLinea(1);				
		mensajeEnConsola("Codigo de menu " + codigoMenu);
		mensajeEnConsola("-->" + descripcionJuego);
		saltosDeLinea(1);				
		mensajeEnConsola("Juego rentado por 3 dias");
		
		saltosDeLinea(3);				
		string opcion;
		cout << "presione 'N' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "N" || opcion == "n") {
			salir = true;
		}
	}
}

