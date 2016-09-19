/* 	Nombres: Gabriel Filtzer Gorbach
		 Daniel Ponce de León Suchil	
	
	Descripcion: Esta clase contiene los metodos principales para el manejo de la torres de Hanoi. Dichos metodos consisten en: 
	el constructor, que inicializa los discos a partir del numero dado; 'llenar' que reinicia el programa; 'mostrar' que imprime
	la posicion de cada disco; 'empty' que comprueba si las pilas estan vacias; y por ultimo 'resolver', el metodo principal que
	encuentra la solucion para el sistema de las torres utilizando el algoritmo.
 */

#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

class Hanoi
{
public:
	Hanoi();
	void llenar();
	void mostrar();
	void resolver();
	void empty();
	~Hanoi();

private:
	int discos;
};
