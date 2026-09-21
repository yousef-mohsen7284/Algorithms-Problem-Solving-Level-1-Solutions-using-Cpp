#include<iostream>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}


int FactorialOfNumber(int Number) {

	int Factorial = 1;

	for (int Counter = Number;Counter >= 1;Counter--) {

		Factorial = Factorial * Counter;
	}
	
	return Factorial;
}

int main() {


	cout << FactorialOfNumber(ReadPositiveNumber("Please Enter a Positive Number?\n")) << endl;

	return 0;
}