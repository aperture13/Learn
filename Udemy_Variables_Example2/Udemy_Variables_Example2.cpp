#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int age{ 18 };

int main()
{
	char middleInitial{ 'J' };
	cout << "My middle name is: " << middleInitial<<endl;

	unsigned short int examScore{ 55 };
	cout << "My exam score is: " << examScore << endl;

	int countriesRepresented{ 65 };
	cout << "There were " << countriesRepresented << " countries represented in my meeting." << endl;

	long peopleInFlordia{ 20610000 };
	cout << "There are about " << peopleInFlordia << " people living in Florida." << endl;

	long long peopleOnEarth{ 7'600'000'000};
	cout << "There are about " << peopleOnEarth << " people on earth." << endl;

	long long distanceToAlphaCentauri{ 9'461'000'000'000 };
	cout << "Distance to Alpha Centauri is " << distanceToAlphaCentauri << " kilometers." << endl;

	float carPayment{ 401.23 };
	cout << "My car payment is " << carPayment << " dollars." << endl;

	double pi{ 3.14159 };
	cout << "Pi is " << pi << endl;

	long double largeAmount{ 2.7e120 };
	cout << largeAmount << " is a very big number." << endl;

	bool gameOver{ false };
	cout << "The value of gameOver is " << gameOver << endl;

	short value1{ 30000 };
	short value2{ 1000 };
	short product{ value1 * value2 };
	cout << "The product of " << value1 << " and " << value2 << " is: " << product<<endl;
	
	system("pause");
	return 0;
}