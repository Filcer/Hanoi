//cuando se imprima la torre tiene que haber una linea entre cada paso

/** Nombre(s):
 *	Descripción: ________
 *
 *
 */

#include "Hanoi.h"

Hanoi::Hanoi(int discos)
{
    this->discos = discos;
    this->movimientos = pow(2, this->discos);
	for (int i = 1 ; i <= discos ; ++i)
	{
		origen.push(i);
	}
}

void Hanoi::llenar(int discos)
{
    while (!(this->destino.empty()) && !(this->origen.empty()))
	{
		if (!destino.empty())
			destino.pop();
		if (!origen.empty())
			origen.pop();
	}
	for (int i = 1; i <= discos; ++i)
	{
		origen.push(i);
	}
}

void Hanoi::mostrar()
{
    stack<int> auxO;
    stack<int> auxA;
    stack<int> auxD;
    int mayor;
    if (origen.size() > aux.size())
	{
		if (aux.size() >= destino.size())
		{
			mayor = origen.size();
		}
		else if (destino.size() >= origen.size())
		{
			mayor = destino.size();
		}
		else
		{
			mayor = aux.size();
		}
	}
    for (int i = mayor; i > 0; --i)
    {
		//Origen
		if (i <= origen.size())
		{
			cout << origen.top() << "\t";
			auxO.push(origen.top());
			origen.pop();
		}
		else
		{
			cout << " \t";
		}
		//aux
		if (i <= aux.size())
		{
			cout << aux.top() << "\t";
			auxA.push(aux.top());
			aux.pop();
		}
		else
		{
			cout << " \t";
		}
		//Destino
		if (i <= destino.size())
		{
			cout << destino.top() << endl;
			auxD.push(destino.top());
			destino.pop();
		}
		else
		{
			cout << " " << endl;
		}
    }
	cout << "Origen\tAux\tDestino" << endl;
}

void Hanoi::resolver()
{
	if (discos % 2 == 0)
	{
		//Caso n = par
		for (int i = 1 ; i <= movimientos ; ++i)
		{
			switch (i % 3)
			{
			case 1:
				if (origen < aux){
					aux.push(origen.top());
					origen.pop();
				}
				else
				{
					origen.push(aux.top());
					aux.pop();
				}
				break;
			case 2:
				if (origen < destino)
				{
					destino.push(origen.top());
					origen.pop();
				}
				else
				{
					origen.push(destino.top());
					destino.pop();
				}
				break;
			case 3:
				if (aux < destino)
				{
					destino.push(aux.top());
					aux.pop();
				}
				else
				{
					aux.push(destino.top());
					destino.pop();
				}
				break;
			}
		}
	}
	else
	{
		//Caso n = impar
		for (int i = 1 ; i <= movimientos ; ++i)
		{
			switch (i % 3)
			{
			case 2:
				if (origen < aux){
					//Origen --> Aux
					aux.push(origen.top());
					origen.pop();
				}
				else
				{
					//Aux --> Origen
					origen.push(aux.top());
					aux.pop();
				}
				break;
			case 1:
				if (origen < destino)
				{
					//Origen --> Destino
					destino.push(origen.top());
					origen.pop();
				}
				else
				{
					//Destino --> Origen
					origen.push(destino.top());
					destino.pop();
				}
				break;
			case 3:
				if (aux < destino)
				{
					//Aux --> Destino
					destino.push(aux.top());
					aux.pop();
				}
				else
				{
					//Destino --> Aux
					aux.push(destino.top());
					destino.pop();
				}
				break;
			}
		}
	}
}