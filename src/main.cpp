//Main.cpp

#include <Hanoi.h>

int main()
{
	int discos;
	std::cout<<"Torres de Hanoi"<<std:endl;
	std::cout<<"Ingrese el Numero de discos: "<<std:endl;
	cin>>discos;
	Hanoi H(discos);
	H.LlenarTorre();
	H.MostrarTorres();
	H.Resolver();
	H.MostrarTorres();
	return 0;
}






