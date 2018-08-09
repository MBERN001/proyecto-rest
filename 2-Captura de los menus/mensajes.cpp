#include <iostream>
#include "mensajes.h"

using namespace std;

// Para generar textos pueden utilizar el sitio web: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
// o
// https://www.youtube.com/watch?v=5g-_Ew4vumo
// https://github.com/RizwanSaeedi/C-Sharp-Ascii-Text-Generator-
//		Abran el proyecto con Visual Studio -> Ascii Code Generator.sln
// 		Eliminen el archivo saeedi.pfx
// 		Ejecuten el programa


void mensajeBienvenido() {
	cout << "Bienvenidos a" << endl;
cout << "   _______ ___  ___  _______  _______  ______     _______  _______  __   __  ___  ______   _______  _______   __   __  __    __ _______  __   __ " << endl;
cout << "  |       ||  | |  ||       ||       ||    _ |   |       ||       ||  |_|  ||   ||      | |   _   ||       | |  | |  ||  |  | ||   _   ||  | |  |" << endl;                  
cout << "  |  _____||  | |  ||    _  ||    ___||   | ||   |       ||   _   ||       ||   ||  _    ||  |_|  ||  _____| |  | |  ||   |_| ||  |_|  ||  |_|  |" << endl;
cout << "  | |_____ |  |_|  ||   |_| ||   |___ |   |_||_  |       ||  | |  ||       ||   || | |   ||       || |_____  |  |_|  ||       ||       ||       |" << endl;
cout << "  |_____  ||       ||    ___||    ___||    __  | |      _||  |_|  ||       ||   || |_|   ||       ||_____  | |       ||  _    ||       ||       |" << endl;
cout << "   _____| ||       ||   |    |   |___ |   |  | | |     |_ |       || ||_|| ||   ||       ||   _   | _____| | |       || | |   ||   _   ||   _   |" << endl;
cout << "  |_______||_______||___|    |_______||___|  |_| |_______||_______||_|   |_||___||______| |__| |__||_______| |_______||_|  |__||__| |__||__| |__|" << endl; 
	
	cout << endl;
	cout << endl;
	cout << endl;
}


void saltosDeLinea(int ciclos) {
	for(int indice = 1; indice <= ciclos; indice ++) {
		cout << endl;
	}
}

void mensajeEnConsola(string textoEnConsola) {			
	cout << textoEnConsola << endl;
}

void mensajeConValorEnConsola(string textoEnConsola, string &valorEnConsola) {			
	cout << textoEnConsola;
	cin >> valorEnConsola;
}


