#ifndef BICICLETA_H
#define BICICLETA_H
#include "llanta.h"

class Bicicleta {
	public:
		double precio;
		double peso;
		Llanta* llanta;
		Bicicleta();
};

#endif
