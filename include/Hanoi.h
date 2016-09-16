//Hanoi.h
#include <iostream>
#include <stack>
#include <cmath>

class Hanoi

private:
	int Discos;



public:
void LlenarTorre();
void MostrarTorres();

void Hanoi::Resolver()
{


//!aux.empty()

}


//Abajo de los 'for' del llenado

void Hanoi::LlenarTorre()
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




