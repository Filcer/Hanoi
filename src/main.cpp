<<<<<<< HEAD
//Main.cpp

#include "Hanoi.h"
=======
/* 	Nombres: Gabriel Filtzer Gorbach
		 Daniel Ponce de León Suchil
 */
#include <Hanoi.h>
>>>>>>> f796ab30fd98bef98346251ad044aa1e0fe8c4ea

int main()
{
	int discos, opcion;
	cout << "Torres de Hanoi" << endl;
	cout << "Ingrese el Numero de discos: ";
	cin >> discos;
	Hanoi H = Hanoi(discos);
	do
	{
		cout << "1. Mostrar" << endl;
    	cout << "2. Resolver" << endl;
    	cout << "3. Llenar Torres" << endl;
		cout << "0. Salir del Programa..." << endl;
		cin >> opcion;
		switch(opcion){
			case 1:
				H.mostrar();
				break;
			case 2:
				H.resolver();
				H.mostrar(); //para ver si se resolvio correctamente
				break;
			case 3:
				cout << "Ingrese el Numero de discos: ";
				cin >> discos;
				H.llenar(discos);
				break;
			case 0:
				break;
			default:
				cout << "Opcion incorrecta." << endl;
		}
	} while (opcion != 0);
	return 0;
}






