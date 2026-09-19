#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}


void PrintRangeFromNto1UsingDoWhileLoop(int Number) {

	cout << "\nRange Printed Using For Statement: \n";
	for (int Counter = Number;Counter >= 1;Counter--) {
		
		cout << Counter << endl;

	}


}




int main() {

	int Number = ReadNumber();

	PrintRangeFromNto1UsingDoWhileLoop(Number);

	return 0;
}