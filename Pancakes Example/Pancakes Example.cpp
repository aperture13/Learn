#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number_of_pancakes[10];
	int order_of_pancakes[10];
	int count1, count2;
	int temp;

	for (count1=0;count1<10;count1++)
	{
		number_of_pancakes[count1] = 0;
		order_of_pancakes[count1] = 0;
	}

	for (count1=0;count1<10;count1++)
	{
		cout << "Enter the number of pancakes that person " << count1 + 1 << " ate: ";
		cin >> number_of_pancakes[count1];
	}

	for (count1=0;count1<10;count1++)
	{
		temp = 0;
		for (count2=count1+1;count2<10;count2++)
		{
			if (number_of_pancakes[count1]<number_of_pancakes[count2])
			{
				temp = count1;
			}
			else
			{
				temp = count1;
			}
		}
		order_of_pancakes[count1] = temp;
	}
	
	for (count1 = 0; count1 < 10; count1++)
		cout << number_of_pancakes[count1]<<" ";
	cout << endl;
	for (count1 = 0; count1 < 10; count1++)
		cout << order_of_pancakes[count1]<<" ";
	cout << endl;
	
	system("pause");
	return 0;
}