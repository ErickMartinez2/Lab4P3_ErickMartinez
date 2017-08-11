#ifndef BICICLETA_H
#define BICICLETA_H
#include "llanta.h"

class Bicicleta {
	private:
		double precio;
		double peso;
		Llanta* llanta;
	public:
		Bicicleta();
};

#endif
