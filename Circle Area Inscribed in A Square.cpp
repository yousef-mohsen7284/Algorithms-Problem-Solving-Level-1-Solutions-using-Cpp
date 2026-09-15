#include<iostream>
#include<cmath>
using namespace std;

float ReadSquareSide() {

	float A;
	cout << "Please Enter the Value of Square Side A?\n";
	cin >> A;

	return A;
}


float AreaofCircleInscribedInASquare(float A) {

	const float PI = 3.141592653589793238;

	float Area = (pow(A, 2) * PI) / 4;

	return Area;
}


void PrintAreaOfCircleInscribedInASquare(float Area) {

	cout << "\nArea Of Circle Inscribed in a Square = " << Area << " cm^2" << endl;

}


int main() {


	PrintAreaOfCircleInscribedInASquare(AreaofCircleInscribedInASquare(ReadSquareSide()));

	return 0;
}