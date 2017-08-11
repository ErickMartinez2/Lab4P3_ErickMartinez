#include "llanta.h"

Llanta::Llanta(string pmaterial, double pprecio, string pcolor) {
	material = pmaterial;
	precio = pprecio;
	color = pcolor;
}

string Llanta::getMaterial() {
	return material;
}

double Llanta::getPrecio() {
	return precio;
}

string Llanta::getColor() {
	return color;
}
