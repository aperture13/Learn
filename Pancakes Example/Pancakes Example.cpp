#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numberOfCupcakes[10];
	int orderOfCupcakes[10];
	int counter, counter2;

	/*for (counter = 0; counter < 10; counter++);
		orderOfCupcakes[counter] = 0;
		*/
	
	for (counter=0; counter<10; counter++)
	{
		cout << "Enter the number of pancakes eaten by person " << counter + 1;
		cin >> numberOfCupcakes[counter];
		for (counter2=0; counter2<10; counter2++)
		{
			if (numberOfCupcakes[counter2]>numberOfCupcakes[9 - counter2])

		}
	}

	
	system("pause");
	return 0;
}