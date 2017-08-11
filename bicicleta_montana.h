#ifndef BICICLETA_MONTANA_H
#define BICICLETA_MONTANA_H
#include "bicicleta.h"

class Bicicleta_Montana : public Bicicleta{
	private:
	public:
		Bicicleta_Montana();
		Bicicleta_Montana(double, double, Llanta*);
		double getPrecio();
		double getPeso();
		Llanta* getLlanta();
		void setLlanta(Llanta*);
		~Bicicleta_Montana();
};

#endif
