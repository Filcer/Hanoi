/**
 *	Autores: 
 *	
 *
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