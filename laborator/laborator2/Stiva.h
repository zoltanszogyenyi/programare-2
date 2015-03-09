#ifndef STIVA_H
#define STIVA_H

class Stiva
{
	public:
		void push(int);
		void pop();
		void afisare();
		bool isGoala();
		bool isPlina();
		int index;

		Stiva(int);
		Stiva(const Stiva&);
		~Stiva();

	private:
		void init(int);
		int *tab;
		int dim;
};

#endif // STIVA_H