#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numberOfPancakes[10];
	int orderOfPancakes[10];// = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i=0; i<10; i++)
	{
		cout << "Enter the number of pancakes that person " << i << " ate: ";
		cin >> numberOfPancakes[i];
	}
	for (int i=0; i<10; i++)
	{
		for (int j=i+1 ;j<10 ;j++)
		{
			if (numberOfPancakes[i] < numberOfPancakes[j])
				orderOfPancakes[i] = i;
			else
				orderOfPancakes[i] = j;
		}
	}
	for (int i = 0; i < 10; i++)
		cout << numberOfPancakes[i] << "\t";
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << orderOfPancakes[i] << "\t";
	cout << endl;
	
	
	
	system("pause");
	return 0;
}