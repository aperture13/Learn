#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number_of_pancakes[10];
	int order_of_pancakes[10];
	int count1{ 0 };
	int count2{ 0 };
	int temp{ 0 };

	for (count1=0;count1<10;count1++)
	{
		number_of_pancakes[count1] = 0;
		order_of_pancakes[count1] = count1;
	}

	for (count1=0;count1<10;count1++)
	{
		cout << "Enter the number of pancakes that person " << count1 << " ate: ";
		cin >> number_of_pancakes[count1];
	}

	for (count1=0;count1<10;count1++)
	{
		
		for (count2=count1+1;count2<10;count2++)
		{
			if (number_of_pancakes[count1]>number_of_pancakes[count2])
			{
				temp = order_of_pancakes[count1];
				order_of_pancakes[count1] = order_of_pancakes[count2];
				order_of_pancakes[count2] = temp;
			}
			
		}
	}
	
	for (count1 = 0; count1 < 10; count1++)
		cout << number_of_pancakes[count1]<<" ";
	cout << endl;
	for (count1 = 0; count1 < 10; count1++)
		cout << order_of_pancakes[count1]<<" ";
	cout << endl;

	for (count1 = 0; count1 < 10; count1++)
		cout << "Person " << order_of_pancakes[count1] << " ate "
	<< number_of_pancakes[order_of_pancakes[count1]] << " pancakes." << endl;
	
	system("pause");
	return 0;
}