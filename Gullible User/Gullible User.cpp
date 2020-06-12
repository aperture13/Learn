#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int counter{ 0 }, userInput;

	do
	{
		cout << "Enter any number other than " << counter<<" :";
		cin >> userInput;
		if(counter==userInput)
		{
			cout << "HEY, You weren't supposed to do that, WTF mate?? Why would you enter "<<userInput<<"????"<<endl;
			break;
		}
		counter++;
	} while (counter < 10);
	if (counter>=10)
	cout << "You are one patient motherfucker! You win." << endl;
	
	system("pause");
	return 0;
}