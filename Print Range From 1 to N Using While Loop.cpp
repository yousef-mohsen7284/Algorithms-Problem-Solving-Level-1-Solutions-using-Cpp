#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}

void PrintRangeFrom1ToN_UsingWhileLoop(int Number) {

	int Counter = 0;
	cout << "\nRange Printed Using While Statement: \n";

	while (Counter < Number)
	{
		Counter++;
		cout << Counter << endl;
	}
}


int main() {

	int Number = ReadNumber();
    
	PrintRangeFrom1ToN_UsingWhileLoop(Number);


	return 0;
}