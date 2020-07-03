#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter elements of the first array: ";
	int i;
	int array1[10];
	for (i = 0; i < 10; i++)
		cin >> array1[i];
	cout << "Enter elements of the second array: ";
	int array2[10];
	int sumArray[10];
	for (i=0;i<10;i++)
	{
		cin >> array2[i];
		sumArray[i] = array1[i] + array2[i];
	}
	cout << "The sum of the two arrays is: " << endl;
	for (i = 0; i < 10; i++)
		cout << sumArray[i] << "\t";
	system("pause");
	return 0;
}