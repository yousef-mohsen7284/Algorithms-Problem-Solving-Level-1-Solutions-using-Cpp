#include<iostream>
#include<cmath>
using namespace std;

void ReadTriangleData(float& a,float& b) {
	
	cout << "Please Enter Length A?\n";
	cin >> a;
	cout << "Please Enter Base B?\n";
	cin >> b;
}


float CircleAreaInscribedInAnIsoscelesTriangle(float a, float b) {
	const float PI = 3.1415926535;
	float Area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return Area;

}

void PrintCircleAreaInscribedInAnIsoscelesTriangle(float Area) {

	cout << "\nCircle Area Inscribed In An Isosceles Triangle = " << Area << " cm^2" << endl;
}


int main() {

	float a, b;
	ReadTriangleData(a, b);
	PrintCircleAreaInscribedInAnIsoscelesTriangle(CircleAreaInscribedInAnIsoscelesTriangle(a, b));

	return 0;
}