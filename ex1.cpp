/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Programare II
Limbaj de programare: C
Data:                 Martie 6 2015 - Vineri

Exercitiul:

1. Realizaţi un program care calculează distanţa dintre două puncte 2D, 3D. Pentru definirea
unui punct 2D, respectiv 3D folosiţi structuri. Folosiţi supraîncărcarea funcţiilor pentru 3
funcţii care realizează acţiuni distincte (ex. funcţiile pentru calculul distanţei, afişare, etc).

*/

#include <iostream>
#include <cmath>

struct two_dimensional {
	int x, y;
};

struct three_dimensional {
	int x, y, z;
};

using namespace std;

// functiile de supraincarcare

// calculul distantei
float distance(float, float, float, float);
float distance(float, float, float, float, float, float);

// calculul punctului de mijloc
void  midpoint(float, float, float, float);
void  midpoint(float, float, float, float, float, float);

// afisare punctelor
void  afisare(float, float, float, float);
void  afisare(float, float, float, float, float, float);


int main()
{
	two_dimensional p1, p2;

	cout << "PUNCTUL 2D" << endl;
	cout << "Dati coordonatele pentru primul punct " << endl;
	cout << "x= ";
	cin >> p1.x;
	cout << "y= ";
	cin >> p1.y;

	cout << "Dati coordonatele pentru al doilea punct " << endl;
	cout << "x= ";
	cin >> p2.x;
	cout << "y= ";
	cin >> p2.y;

	// distanta dintre puncte
	cout << "Distanta dintre punctele ";
	afisare(p1.x, p1.y, p2.x, p2.y);
	cout << " este de " << distance(p1.x, p1.y, p2.x, p2.y) << endl; 

	// punctul de mijloc dintre puncte
	cout << "Punctul de mijloc dintre punctele ";
	afisare(p1.x, p1.y, p2.x, p2.y);
	cout << " este de ";
	midpoint(p1.x, p1.y, p2.x, p2.y);

	three_dimensional p3, p4;

	cout << "PUNCTUL 3D" << endl;
	cout << "Dati coordonatele pentru primul punct " << endl;
	cout << "x= ";
	cin >> p3.x;
	cout << "y= ";
	cin >> p3.y;
	cout << "z= ";
	cin >> p3.z;

	cout << "Dati coordonatele pentru al doilea punct " << endl;
	cout << "x= ";
	cin >> p4.x;
	cout << "y= ";
	cin >> p4.y;
	cout << "z= ";
	cin >> p4.z;

	// distanta dintre puncte
	cout << "Distanta dintre punctele ";
	afisare(p3.x, p3.y, p3.z, p4.x, p4.y, p4.z); 
	cout << " este de " << distance(p3.x, p3.y, p3.z, p4.x, p4.y, p4.z) << endl;

	// punctul de mijloc dintre puncte
	cout << "Punctul de mijloc dintre punctele ";
	afisare(p3.x, p3.y, p3.z, p4.x, p4.y, p4.z);
	cout << " este de ";
	midpoint(p3.x, p3.y, p3.z, p4.x, p4.y, p4.z);
}

float distance(float x1, float y1, float x2, float y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float distance(float x1, float y1, float z1, float x2, float y2, float z2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) + pow((z2 - z1), 2);
}

void midpoint(float x1, float y1, float x2, float y2)
{
	cout << "(" << (x1 + x2) / 2 << ", " << (y1 + y2) / 2 << ")" << endl;
}

void midpoint(float x1, float y1, float z1, float x2, float y2, float z2)
{
	cout << "(" << (x1 + x2) / 2 << ", " << (y1 + y2) / 2 << ", " << (z1 + z2) / 2 << ")" << endl;
}

void afisare(float x1, float y1, float x2, float y2)
{
	cout << "(" << x1 << ", " << y1 << ") si (" << x2 << ", " << y2 << ")";
}

void afisare(float x1, float y1, float z1, float x2, float y2, float z2)
{
	cout << "(" << x1 << ", " << y1 << ", " << z1 << ") si (" << x2 << ", " << y2 << ", " << z2 << ")";
}
