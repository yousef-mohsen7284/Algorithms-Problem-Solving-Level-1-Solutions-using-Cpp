#include<iostream>
#include<cmath>
using namespace std;

void ReadTrianbleComponents(float& A, float& B, float& C) {

	cout << "Please Enter Value of Height A?\n";
	cin >> A;
	cout << "Please Enter Value of Base B?\n";
	cin >> B;
	cout << "Please Enter Value of Side C?\n";
	cin >> C;
}


float CircleAreaDescribedAroundArbitaryTriangle(float A, float B, float C) {

	const float PI = 3.14159265359;
	float P = (A + B + C) / 2;
	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float Area = PI * pow(T, 2);
	return Area;
}

void PrintCircleAreaDescribedAroundArbitaryTriangle(float Area) {

	cout << "Circle Area Described Around Arbitary Triangle = " << Area << " cm^2" << endl;
}


int main() {

	float A, B, C;
	ReadTrianbleComponents(A, B, C);
	PrintCircleAreaDescribedAroundArbitaryTriangle(CircleAreaDescribedAroundArbitaryTriangle(A, B, C));

	return 0;
}