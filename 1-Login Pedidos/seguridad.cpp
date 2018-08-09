#include <iostream>
#include "seguridad.h"
#include "mensajes.h"

using namespace std;

bool login() {
	string password;
	bool acceso = false;
	int intentos = 0;
	
	while (acceso == false) {
		system("cls");		
		mensajeBienvenido();
		
		if (intentos == 3) {
			cout << "No se ha podido validar su contraseña, por favor contacte al administrador encargado." << endl;
			
			return false;
		}
	
		cout << "Ingrese su contraseña por favor: ";
		cin >> password;
		
		if (password == "admin" || password == "Strongpassword21" ) {
			acceso = true;
		}				
		
		intentos++;		
	}
	
	system("cls");
	
	return true;
}

