/*
 Autores: 
 		Gabriel Filtzer Gorbach
 		Daniel Ponce de León Súchil
 Descripcion: 
 		Esta clase contiene los metodos principales utilizados en el programa. Entre estos esta el metodo 
 		constructor 'Hanoi', el cual inicializa las pilas con el numero de discos que se le indique. Por otro lado, 
 		el metodo 'mostrar' imprime la distribucion actual de los discos en las tres pilas, y 'resolver' ejecuta el alogritmo
 		que resuelve el sistema, mientras se muestra cada uno de los pasos realizados. Finalmente, el metodo 'llenar' tiene 
 		como funcion la de reiniciar el programa con un nuevo numero de discos dado por el usuario.
 	
 */

#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

class Hanoi
{
public:
	Hanoi(int discos);
	void llenar(int discos);
	void mostrar();
	void resolver();

private:
	int discos;
	int movimientos;
	stack<int> origen;
	stack<int> aux;
	stack<int> destino;
};
