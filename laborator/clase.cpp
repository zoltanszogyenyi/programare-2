#ifndef STIVA_H
#define STIVA_H

class Stiva
{
	public: void init(int d);
	bool isGoala();
	bool isPlina();
	Stiva();
	virtual -Stiva();
	protected:
	private:
		int *tab;
		int dim;
		int index;
};

#endif // STIVA_H