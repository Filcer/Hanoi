/** 
 *	Nombre(s): Gabriel Filtzer Gorbach
 *		Daniel Ponce de León Súchil
 *	Descripción: ________
 *
 *
 */

#include "Hanoi.h"

Hanoi::Hanoi(int discos)
{
    this->discos = discos;
    this->movimientos = pow(2, this->discos);
	for (int i = discos ; i > 0 ; --i)
	{
		origen.push(i);
	}
}

void Hanoi::llenar(int discos)
{
    while ((origen.size() != 0) && (origen.size() != 0))
	{
		if (destino.size() != 0)
			destino.pop();
		if (origen.size() != 0)
			origen.pop();
	}
	for (int i = discos; i > 0; --i)
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
			cout << "| "<< origen.top() << " |\t" ;
			auxO.push(origen.top());
			origen.pop();
		}
		else
		{
			cout << "|   |\t";
		}
		//aux
		if (i <= aux.size())
		{
			cout << "| " << aux.top() << " |\t";
			auxA.push(aux.top());
			aux.pop();
		}
		else
		{
			cout << "|   |\t";
		}
		//Destino
		if (i <= destino.size())
		{
			cout << "| " << destino.top() << " |" << endl;
			auxD.push(destino.top());
			destino.pop();
		}
		else
		{
			cout << "|   | " << endl;
		}
    }
	for (int i = mayor; i > 0; --i)
	{
		if (!auxO.empty())
		{
			origen.push(auxO.top());
			auxO.pop();
		}
		if (!auxA.empty())
		{
			aux.push(auxA.top());
			auxA.pop();
		}
		if (!auxD.empty())
		{
			destino.push(auxD.top());
			auxD.pop();
		}
	}
	cout << " Orig.	 Aux.	 Dest." << endl;
	cout << "___________________________" << endl;
}

void Hanoi::resolver()
{
	mostrar();
	if ((discos % 2) == 0)
	{
		//Caso n = par
		for (int i = 1 ; i <= movimientos ; ++i)
		{
			cout << "Movimiento " << i << endl;
			switch (i % 3)
			{
				case 1:
					if (aux.size() == 0 || origen.top() < aux.top())
					{
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
				case 2:
					if (destino.size() == 0 || origen.top() < destino.top())
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
					if (destino.size() == 0 || aux.top() < destino.top())
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
			mostrar();
		}
	}
	else
	{
		//Caso n = impar
		for (int i = 1 ; i <= movimientos ; ++i)
		{
			cout << "Movimiento " << i << endl;
			switch (i % 3)
			{
				case 1:
					if (destino.size() == 0 || origen.top() < destino.top())
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
				case 2:
					if (aux.size() == 0 || origen.top() < aux.top())
					{
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
				case 3:
					if (destino.size() == 0 || aux.top() < destino.top())
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
		mostrar();
	}
}