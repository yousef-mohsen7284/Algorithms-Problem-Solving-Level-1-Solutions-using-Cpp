#include<iostream>
using namespace std;

void ReadRectangleComp(float& Length, float& Width) {
	cout << "Please Enter Rectangle Length?\n";
	cin >> Length;
	cout << "Please Enter Rectangle Width?\n";
	cin >> Width;
}

float RectangleAreaCalculation(float Length, float Width) {

	return Length * Width;
}

void PrintRectangleArea(float Area) {
	cout << "\nArea of Rectnagle = " << Area << " cm^2" << endl;
}


int main() {

	float Length, Width;
	ReadRectangleComp(Length, Width);
	PrintRectangleArea(RectangleAreaCalculation(Length, Width));


	return 0;

}