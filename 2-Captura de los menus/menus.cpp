#include <iostream>
#include "menus.h"
#include "mensajes.h"

using namespace std;

string arregloJuegos[10][2] = {
	{ "M001", "Hamburguesa con papas y refresco"},
	{ "M002", "Pollo Frito con tajadas"},
	{ "M003", "Sandwich de jamon y queso"},
	{ "M004", "Alitas con papas"},
	{ "M005", "Alitas BBQ con papas"},
	{ "M006", "Chuleta asada con tajadas"},
	{ "M007", "Flan de leche"},
	{ "M008", "Flan de coco"},
	{ "M009", "Arroz con leche"},
	{ "M010", "Helado"}
};


void juegos() {
	system("cls");
	
	cout << "Pantalla de Menus :" << endl;
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

bool buscarJuego(string &codigo, string &descripcionMenu) {
	while(true) {
		mensajeEnConsola("BUSCAR MENU");
		mensajeEnConsola("------------");
		saltosDeLinea(2);			
		mensajeConValorEnConsola("Codigo del Menu: ", codigo);
		
		for(int indice = 0; indice < 5; indice++) {		
			if (arregloMenu[indice][0] == codigo) {
				descripcionMenu = arregloMenus[indice][1];
				mensajeEnConsola("--> " + descripcionMenu);
				return true;
			}
		}		
			
		bool continuar = false;
		while(continuar == false) {
			system("cls");
			
			string opcion = "";
			mensajeConValorEnConsola("Codigo de Menu no encontrado, desea continuar buscando s/n? ", opcion);
			
			if (opcion == "s" || opcion == "S") {
				continuar = true;
				system("cls");
			}
			if (opcion == "f" || opcion == "F") {
				return false;
			}		
		}
	}
}

