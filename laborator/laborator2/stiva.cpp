#include <iostream>
#include "Stiva.h"

// constructor

Stiva::Stiva(int d)
{
	init(d);
	std::cout << "obiectul a fost creat" << std::endl;
}

Stiva::Stiva(const Stiva& a)
{
	if (this != &a)
	{
		this->dim   = a.dim;
		this->index = a.index;
		this->tab   = new int[this->dim];
		for (int i = 0; i < index; ++i)
		{
			this->tab[i] = a.tab[i];
		}
	}
	std::cout << "obiectul a fost copiat!" << std::endl;
}

Stiva::~Stiva(void)
{
	if (tab != NULL)
	{
		delete []tab;
	}
	std::cout << "obiectul a fost distrus!" << std::endl;
}

void Stiva::init(int d)
{
	dim = d;
	index = 0;
	tab = new int[dim];
}

bool Stiva::isGoala()
{
	return index == 0;
}

bool Stiva::isPlina()
{
	return index == dim;
}

void Stiva::push(int e)
{
	if (isPlina())
	{
		throw "Stiva plina.";
	}

	tab[index] = e;
	++index;
}

void Stiva::afisare()
{
	for (int i = 0; i < index; ++i)
	{
		std::cout << tab[i] << " ";
	}

	std::cout << std::endl;
}

void Stiva::pop()
{
	if (isGoala())
	{
		throw "Stiva este goala.";
	}

	tab[index] = 0;
	--index;
}