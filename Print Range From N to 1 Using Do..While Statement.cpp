#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}


void PrintRangeFromNto1UsingDoWhileLoop(int Number) {

	int Counter = Number + 1;
	cout << "\nPrinted List Using Do..While Statement: \n";

	do 
	{
		Counter--;
		cout << Counter << endl;

	} while (Counter > 1);

}




int main() {

	int Number = ReadNumber();

	PrintRangeFromNto1UsingDoWhileLoop(Number);


	return 0;
}