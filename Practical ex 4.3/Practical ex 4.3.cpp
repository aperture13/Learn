#include <iostream>

int integer;
float floating;

using std::cout;
using std::endl;

int main()
{
	floating = 1.0 / 2.0;
	integer = 1 / 3;
	cout << "Integer= " << integer<<endl;
	cout << "Floating= " << floating << endl;
	
	floating = (1.0 / 2.0) + (1.0 / 2.0);

	cout << "Integer= " << integer << endl;
	cout << "Floating= " << floating << endl;
	
	floating = 3.0 / 2.0;
	cout << "Integer= " << integer << endl;
	cout << "Floating= " << floating << endl;

	integer = floating;
	
	cout << "Integer= " << integer << endl;
	cout << "Floating= " << floating << endl;

	system("pause");
	return 0;
}