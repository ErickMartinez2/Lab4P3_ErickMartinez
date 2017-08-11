#include "bicicleta_montana.h"

Bicicleta_Montana::Bicicleta_Montana(double pprecio, double ppeso, Llanta* pllanta) {
	precio = pprecio;
	peso = ppeso;
	llanta = pllanta;
}

double Bicicleta_Montana::getPrecio() {
	return precio;
}

double Bicicleta_Montana::getPeso() {
	return peso;
}

Llanta* Bicicleta_Montana::getLlanta() {
	return llanta;
}

void Bicicleta_Montana::setLlanta(Llanta* pllanta) {
	llanta = pllanta;
}
