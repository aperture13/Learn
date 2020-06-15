#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
	cout << "Enter the length of the room: ";
	int roomLength{ 0 };
	cin >> roomLength;
	
	cout << "Enter the width of the room: ";
	int roomWidth{ 0 };
	cin >> roomWidth;

	cout << "The area of the room is: " << roomLength * roomWidth << " meters squared."<<endl;

	system("pause");
	return 0;
}