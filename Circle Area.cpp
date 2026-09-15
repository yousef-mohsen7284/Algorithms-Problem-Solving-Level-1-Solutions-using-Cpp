#include<iostream>
#include<cmath>
using namespace std;

float ReadRadius() {

	float R;

	cout << "Please Enter the Value of Radius R?\n";
	cin >> R;

	return R;
}

float CircleAreaCalc(float R) {

	const float PI = 3.14159253589793238;
	float Area = PI * pow(R, 2);
	return Area;
}

void PrintCircleArea(float Area) {

	cout << "\nArea of Circle = " << Area << " cm^2" << endl;
}

int main() {

	PrintCircleArea(CircleAreaCalc(ReadRadius()));

	return 0;

}