#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int_fast64_t number_of_cupcakes[10];
	int_fast64_t order_of_cupcakes[10];
	int counter1=0, counter2=0;

	for (counter1 = 0; counter1 < 10; counter1++);
	{
		order_of_cupcakes[counter1] = 0;
		number_of_cupcakes[counter1] = 0;
	}
	for (counter1=0; counter1<10; counter1++)
	{
		cout << "Enter the number of pancakes eaten by person " << counter1 + 1<<" ";
		cin >> number_of_cupcakes[counter1];
		for (counter2=0; counter2<10; counter2++)
		{
			if (number_of_cupcakes[counter2] > number_of_cupcakes[9 - counter2])
			{
				if (number_of_cupcakes[counter2] > number_of_cupcakes[counter2 - 1])
					order_of_cupcakes[counter2] = counter2;
			}
		}
	}
	for (counter1=0;counter1<10;counter1++)
	{
		cout << "Person " << order_of_cupcakes[counter1+1] << " ate "
		<< number_of_cupcakes[order_of_cupcakes[counter1]] <<" cupcakes!" << endl;

	}

	
	system("pause");
	return 0;
}