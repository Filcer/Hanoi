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
	Hanoi();
	void llenar();
	void mostrar();
	void resolver();
	void empty();
	~Hanoi();

private:
	int discos;
};