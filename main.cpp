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
	Bicicleta_Montana** camion_montana = new Bicicleta_Montana*[camion2_tamano1];
	for (int i = 0; i < camion2_tamano1; i++) {
		camion_montana[i] = new Bicicleta_Montana[camion2_tamano2];
	}
	int opcion;
	do {
		cout << endl;
		cout << "-> Menu Camion" << endl
			<< "1. Llenar Camion" << endl
			<< "2. Ver Precio" << endl
			<< "3. Salir" << endl
			<< "Ingrese su opcion: ";
		cin >> opcion;
		if (opcion == 1) {
			int opcion2;
			do {
				cout << endl;
				cout << "-> Llenar Camion" << endl
					<< "1. Individual" << endl
					<< "2. Llenar Todo el Camion" << endl
					<< "3. Salir" << endl
					<< "Ingrese su opcion: ";
				cin >> opcion2;
				if (opcion2 == 1) {
					
				} else {
					if (opcion2 == 2) {
						
					} else {
						cout << "Opcion Incorrecta!" << endl;
					}
				}
			} while (opcion2 != 3);
		} else {
			if (opcion == 2) {

			} else {
				if (opcion == 3) {
					cout << "Hasta Pronto!" << endl;
				} else {
					cout << "Opcion Incorrecta!" << endl;
				}
			}
		}
	} while (opcion != 3);
	liberarMatriz1(camion_carrera, camion1_tamano1);
	liberarMatriz2(camion_montana, camion2_tamano1);
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
