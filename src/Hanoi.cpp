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

void Hanoi::llenar() 
{
    for (int i = this->discos; i > 0; --i)
    {
	this->origen.push(i);
    }
}

void Hanoi::resolver()
{
	if (n % 2 == 0)
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
					origen.push(destino.pop());
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
					aux.push(origen.top());
					origen.pop();
				}
				else
				{
					origen.push(aux.top());
					aux.pop();
				}
				break;
			case 1:
				if (origen < destino)
				{
					destino.push(origen.top());
					origen.pop();
				}
				else
				{
					origen.push(destino.pop());
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
}

void Hanoi::mostrar()
{
    std::stack<int> auxO;
    std::stack<int> auxA;
    std::stack<int> auxD;
    int mayor;
    if (this->origen.size() > this->auxiliar.size() && this->origen.size() > this->destino.size())
    {
	mayor = origen.size();
    }
    else if (this->auxiliar.size() > this->origen.size() && this->auxiliar.size > this->destino.size())
    {
	mayor = auxiliar.size();
    }
    else
    {
	mayor = destino.size();
    }
    for (int i = mayor; i > 0; --i)
    {
	if (i <= origen.size())
	{
	    cout << origen.top() << auxO.push(origen.top());
	    origen.pop();
	}
	else
	{
	    cout << "*"
		      << " "
	}

	if (i <= auxiliar.size())
	{
	    cout << auxiliar.top() << " " auxA.push(auxiliar.top());
	    auxiliar.pop();
	}
	else
	{
	    cout << "*"
		      << " "
	}
	if (i <= destino.size())
	{
	    cout << destino.top() << endl;
	    auxD.push(destino.top());
	    destino.pop();
	}
	else
	{
	    cout << "*" << endl;
	}
    }
}
