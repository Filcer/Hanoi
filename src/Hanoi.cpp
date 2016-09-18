//cuando se imprima la torre tiene que haber una linea entre cada paso

/** Nombre(s):
Descripción: ________

**/

#include "Hanoi.h"

Hanoi::Hanoi(int Discos)
{

this->Discos=Discos;
this->numMovimientos=pow(2,this->)

}


void Hanoi::Resolver()
{

	if(this->Discos%2==0)
	{
		for(int i=1;i>this->numMovimientos;++i)
		{
			int O=(this->origen.empty())?0:this->origen.top();
			int A=
		}
	}
}


void Hanoi::LlenarTorre() //¿incompleto?
{
	for(int i= this->Discos;i>0;--i)
	{
		this->origen.push(i);
	}
}

void Hanoi::MostrarTorres()
{
	std::stack<int> aux0;
	std::stack<int> auxA;
	std::stack<int> auxD;
	int mayor;
	if(this->origen.size() >this->auxiliar.size() && this->origen.size() >this->destino.size())
		{
			mayor=origen.size();
		}else if(this->auxiliar.size() >this->origen.size() && this->auxiliar.size > this->destino.size())
		{
			mayor=auxiliar.size();
		}else
		{
			mayor=destino.size();
		}
		for(int i=mayor; i>0; --i)
		{
			if(i<=origen.size())
			{
				std::cout<<origen.top()<<" "
				aux0.push(origen.top());
				origen.pop();
			}else
			{
				std::cout<<"*"<<" "
			}

			if(i<=auxiliar.size())
			{
				std::cout<<auxiliar.top()<<" "
				auxA.push(auxiliar.top());
				auxiliar.pop();
			}else
			{
				std::cout<<"*"<<" "
			}
			if(i<=destino.size())
			{
				std::cout<<destino.top()<<std::endl;
				auxD.push(destino.top());
				destino.pop();
			}else
			{
				std::cout<<"*"<<endl; 
			}
		}
}


