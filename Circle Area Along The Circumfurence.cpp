#include<iostream>
#include<cmath>
using namespace std;

float ReadCirclelengthalongcircumfurence() {
	float L;
	cout << "Please Enter Circumfurence L?\n";
	cin >> L;

	return L;
}

float CalculateCircleAreaAlongTheCircumfurence(float L) {

	const float PI = 3.1415926535;

	float Area = pow(L, 2) / (4 * PI);
	return Area;
}

void PrintCircleAreaAlongTheCircumfurence(float Area) {

	cout << "\nArea of Circle Along The Circumfurence = " << Area << " cm^2" << endl;
}

int main() {


	PrintCircleAreaAlongTheCircumfurence(CalculateCircleAreaAlongTheCircumfurence(ReadCirclelengthalongcircumfurence()));

	return 0;
}