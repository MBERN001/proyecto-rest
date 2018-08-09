#include <iostream>
#include "clientes.h"
#include "mensajes.h"

using namespace std;

string arregloClientes[8][3] = {
	{ "M01", "Carlos Sabillon", "85-85-44-92"},
	{ "M02", "Jose Conrad", "85-85-44-91"},
	{ "M03", "Martha Moncada", "85-85-44-90" },
	{ "M04", "Pedro Chinchilla", "85-85-44-95" },
	{ "M05", "Rebeca Arriaga ", "85-85-44-97" }
	{ "M06", "Marcos Lopez", "85-85-44-99"},
	{ "M07", "John Green", "85-85-44-98"},
	{ "M08", "Samuel Santana", "85-85-44-93" },
};


void clientes() {
	system("cls");

	cout << "Pantalla de clientes :" << endl;
	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "Presione 'N' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "N" || opcion == "n") {
			salir = true;
		}
	}
}

bool buscarCliente(string &codigo, string &nombreCliente) {
	while(true) {
		mensajeEnConsola("BUSCAR CLIENTE");
		mensajeEnConsola("--------------");
		saltosDeLinea(2);		
		mensajeConValorEnConsola("Codigo del Cliente: ", codigo);
		
		for(int indice = 0; indice < 8; indice++) {		
			if (arregloClientes[indice][0] == codigo) {
				nombreCliente = arregloClientes[indice][1];
				mensajeEnConsola("--> " + nombreCliente);
				return true;
			}
		}		
			
		bool continuar = false;
		while(continuar == false) {
			system("cls");
			
			string opcion = "";
			mensajeConValorEnConsola("Codigo de cliente erroneo, desea seguir buscando s/n? ", opcion);
			
			if (opcion == "n" || opcion == "N") {
				continuar = true;
				system("cls");
			}
			if (opcion == "f" || opcion == "F") {
				return false;
			}		
		}
	}
}

