#include<iostream>
using namespace std;

void ReadTriangleComp(float& A, float& H) {


	cout << "Please Enter Triangle Base A?\n";
	cin >> A;
	cout << "Please Enter Triangle Height H?\n";
	cin >> H;
}

float TriangleAreaCalc(float A, float H) {

	float Area = (A / 2) * H;
	return Area;
}

void PrintTriangleArea(float Area) {

	cout << "\nArea of Trianlge = " << Area << " cm^2" << endl;
}

int main() {

	float A, H;
	ReadTriangleComp(A, H);
	PrintTriangleArea(TriangleAreaCalc(A, H));

	return 0;
}
