/**
 *
 *
 *
 */

#include "Hanoi.h"

int main()
{
	cout<<"\tTorres de Hanoi"<<endl;
	Hanoi H(3);
	H.llenar(3);
	H.mostrar();
	H.resolver();
	H.mostrar();
	return 0;
}






