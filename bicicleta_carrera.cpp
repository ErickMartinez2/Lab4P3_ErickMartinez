#include "bicicleta_carrera.h"

Bicicleta_Carrera::Bicicleta_Carrera(double pprecio, double ppeso, Llanta* pllanta) {
	precio = pprecio;
	peso = ppeso;
	llanta = pllanta;
}

double Bicicleta_Carrera::getPrecio() {
	return precio;
}

double Bicicleta_Carrera::getPeso() {
	return peso;
}

Llanta* Bicicleta_Carrera::getLlanta() {
	return llanta;
}

void Bicicleta_Carrera::setLlanta(Llanta* pllanta) {
	llanta = pllanta;
}

