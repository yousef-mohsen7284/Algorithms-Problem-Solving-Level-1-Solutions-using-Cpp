#include<iostream>
#include<cmath>

using namespace std;

float ReadDiameter() {

	float D;
	cout << "Please Enter The Value of Diameter D?\n";
	cin >> D;

	return D;
}


float AreaCircleThroughDiameter(float D) {

	const float PI = 3.141592653589793238;
	float Area = (PI * pow(D, 2)) / 4;
	return Area;

}


void PrintCircleArea(float Area) {

	cout << "Area of Circle through Diameter = " << Area << " cm^2" << endl;

}


int main() {

	PrintCircleArea(AreaCircleThroughDiameter(ReadDiameter()));

	return 0;
}