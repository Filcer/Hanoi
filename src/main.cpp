/* 	Nombres: Gabriel Filtzer Gorbach
		 Daniel Ponce de León Suchil
 */
#include <Hanoi.h>

int main()
{
	int discos, opcion;
	std::cout<<"Torres de Hanoi"<<std:endl;
	std::cout<<"Ingrese el Numero de discos: "<<std:endl;
	cin>>discos;
	Hanoi H=Hanoi(discos);
	do{
		cout << "1. Mostrar" <<endl;
    		cout << "2. Resolver" <<endl;
    		cout << "3. Llenar Torres" <<endl;
    		cout << "0. Salir del Programa..." <<endl;
    		cin >> opcion;
	switch(opcion){
		case 1:
			H.MostrarTorres();
		break;
		
		case 2:
			H.Resolver();
			H.MostrarTorres(); //para ver si se resolvio correctamente
		break;
		
		case 3:
			std::cout<<"Ingrese el Numero de discos: "<<std:endl;
			cin>>discos;
			H.LlenarTorre(discos);
		break;
		
		case 0:
		break;
		default:
            	std::cout << "Opcion incorrecta." << std::endl;
		}
	} while (opcion != 0);

	return 0;
}






