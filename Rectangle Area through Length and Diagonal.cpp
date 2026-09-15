#include<iostream>
#include<cmath>
using namespace std;

void ReadRectangleComponents(float& L, float& D) {

	cout << "Please Enter Rectangle Side length ?\n";
	cin >> L;
	cout << "Please Enter Rectangle Diagonal ?\n";
	cin >> D;
}


float RectangleAreaThroughLengthAndDiagonal(float L, float D) {

	float Area = L * (sqrt(pow(D, 2) - pow(L, 2)));
	return Area;
}

void PrintRectangleArea(float Area) {

	cout << "\nRectangle Area through Length and Diagonal = " << Area << " cm^2" << endl;

}

int main() {


	float L, D;
	ReadRectangleComponents(L, D);
	PrintRectangleArea(RectangleAreaThroughLengthAndDiagonal(L, D));

	return 0;

}