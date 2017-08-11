#include "llanta.h"
#include "bicicleta.h"
#include "bicicleta_carrera.h"
#include "bicicleta_montana.h"
#include <iostream>
using namespace std;

int Calcular_Camion(int);
void liberarMatriz1(Bicicleta_Carrera**, int);
void liberarMatriz2(Bicicleta_Montana**, int);

int main() {
	/*
	Llanta* llanta = new Llanta();
	Bicicleta* bicicleta = new Bicicleta();
	Bicicleta_Carrera* bicicleta_carrera = new Bicicleta_Carrera();
	Bicicleta_Montana* bicicleta_montana = new Bicicleta_Montana();
	*/
	cout << "*** Jitensha Motors ***" << endl;
	cout << "-> Información General de Camiones" << endl;
	cout << "Ingrese el tamaño del primer camion: ";
	int camion1_tamano1;
	cin >> camion1_tamano1;
	cout << "Ingrese el tamaño del segundo camion: ";
	int camion2_tamano1;
	cin >> camion2_tamano1;
	int camion1_tamano2 = Calcular_Camion(camion1_tamano1);
	cout << camion1_tamano2 << endl;
	int camion2_tamano2 = Calcular_Camion(camion2_tamano1);
	cout << camion2_tamano2 << endl;
	Bicicleta_Carrera** camion_carrera = new Bicicleta_Carrera*[camion1_tamano1];
	for (int i = 0; i < camion1_tamano1; i++) {
		camion_carrera[i] = new Bicicleta_Carrera[camion1_tamano2];
	}
	cout << "xd" << endl;
	Bicicleta_Montana** camion_montana = new Bicicleta_Montana*[camion2_tamano1];
	for (int i = 0; i < camion2_tamano1; i++) {
		camion_montana[i] = new Bicicleta_Montana[camion2_tamano2];
	}
	cout << "xd" << endl;
	liberarMatriz1(camion_carrera, camion1_tamano2);
	liberarMatriz2(camion_montana, camion2_tamano2);
	return 0;
}

void liberarMatriz1(Bicicleta_Carrera** matriz, int tamano) {
	for (int i = 0; i < tamano; i++) {
			delete[] matriz[i];
			matriz[i] = NULL;
	}
	delete[] matriz;
}

void liberarMatriz2(Bicicleta_Montana** matriz, int tamano) {
	for (int i = 0; i < tamano; i++) {
			delete[] matriz[i];
			matriz[i] = NULL;
	}
	delete[] matriz;
}

int Calcular_Camion(int tamano) {
	int tamano2 = 0;
	if (tamano % 4 == 0) {
		tamano2 = tamano + (0.75 * tamano);
	} else {
		if (tamano % 2 == 0) {
			tamano2 = 1.5 * tamano;
		} else {
			tamano2 = 2 * tamano;
		}
	}
	return tamano2;
}
