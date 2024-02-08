#include <iostream>
using namespace std;

int main()
{
	int a = 30;
	int b = 20;
	bool c = false;

	cout << "a: " << a << endl << "b: " << b << endl;

	cout << "a ist kleiner gleich b: ";

	//-----------------Variante-Ternärer-Operator------------

	a <= b ? c = true : c = false;
	c ? cout << "Wahr" << endl : cout << "Falsch" << endl;

	//--------------------------------------------------------

	cout << "a ist kleiner gleich b: ";

	//-----------------Variante-If-Anweisung------------------

	if(a <= b)
	{
		c = true;
	}
	else
	{
		c = false;
	}

	if (c)
	{
		cout << "Wahr" << endl;
	}
	else
	{
		cout << "Falsch" << endl;
	}

	//--------------------------------------------------------

	return 0;
}
