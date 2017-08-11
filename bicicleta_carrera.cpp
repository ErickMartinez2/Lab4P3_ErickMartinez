#include "bicicleta_carrera.h"

Bicicleta_Carrera::Bicicleta_Carrera() {
	precio = 0;
	peso = 0;
	llanta = NULL;
}

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

void Bicicleta_Carrera::setPrecio(double pprecio) {
	precio = pprecio;
}

void Bicicleta_Carrera::setPeso(double ppeso) {
	peso = ppeso;
}

