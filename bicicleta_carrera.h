#ifndef BICICLETA_CARRERA_H
#define BICICLETA_CARRERA_H
#include "bicicleta.h"

class Bicicleta_Carrera : public Bicicleta{
	private:
	public:
		Bicicleta_Carrera();
		Bicicleta_Carrera(double, double, Llanta*);
		double getPrecio();
		double getPeso();
		Llanta* getLlanta();
		void setLlanta(Llanta*);
		~Bicicleta_Carrera();
};

#endif
