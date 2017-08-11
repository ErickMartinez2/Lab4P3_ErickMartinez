#ifndef LLANTA_H
#define LLANTA_H
#include <string>
using namespace std;

class Llanta {
	private:
		string material;
		double precio;
		string color;
	public:
		Llanta();
		Llanta(string, double, string);
		string getMaterial();
		double getPrecio();
		string getColor();	
};

#endif
