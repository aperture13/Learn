#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int choice;
	int i;
	const char* beverages[5] = { "Pepsi","Fanta","Sprite","Orange Juice","Strawberry Juice" };

	cout << "Welcome to our vending machine, here's the selection of beverages: "<<endl;
	for (i=0;i<5;i++)
	{
		cout << "Item " << i + 1 << ": " << beverages[i] << endl;
	}
	
	cout << "Enter the number of the beverage that you would like to purchase: ";
	cin >> choice;

	if (choice > 5 || choice < 1)
		cout << "Error. choice was not valid, here is your money back."<<endl;
	else
	{
		choice--;
		cout << "You have chosen " << beverages[choice] << ", please stand by."<<endl;
	}

	system("pause");
	
	return 0;
}