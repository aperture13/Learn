#include <iostream>

using namespace std;

int main()
{
	const int rectangleLength = 3; //in inches
	const int rectangleWidth = 5; //in inches

	const float f_rectangleLength = 2.3; //in inches
	const float f_rectangleWidth = 6.8; //in inches

	int areaOfRectangle;
	int circumferenceOfRectangle;

	float f_areaOfRectangle;
	float f_circumferenceOfRectangle;

	areaOfRectangle = rectangleLength * rectangleWidth;
	circumferenceOfRectangle = 2 * rectangleWidth + 2 * rectangleLength;

	f_areaOfRectangle = f_rectangleLength * f_rectangleWidth;
	f_circumferenceOfRectangle = 2 * f_rectangleLength + 2 * f_rectangleWidth;
	
	cout << "Area of the rectangle 1: " << areaOfRectangle << " square inches." << endl;
	cout << "Circumference of rectangle 1: " << circumferenceOfRectangle << " square inches. " << endl;
	cout << "Area of rectangle 2: " << f_areaOfRectangle << " square inches." << endl;
	cout << "Circumference of rectangle 2: " << f_circumferenceOfRectangle << " square inches." << endl;
	
	system("pause");
	return 0;
}