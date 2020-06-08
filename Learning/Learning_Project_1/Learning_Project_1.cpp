#include <iostream>

int main()
{
	int fav_num;
	do
	{
		std::cout << "Enter your favorite number between 1 and 100:";
		std::cin >> fav_num;
	}
	while (fav_num > 100 || fav_num < 1);
	
	std::cout << "Your favorite number is "<<fav_num << "?"<<std::endl<<"That's my favorite number too!" << std::endl;
	
	system("pause");
	
	return 0;
}