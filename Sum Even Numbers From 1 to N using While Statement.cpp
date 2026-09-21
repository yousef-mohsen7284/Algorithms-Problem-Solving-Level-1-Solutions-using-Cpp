#include<iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };
int ReadNumber() {

	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;

	return Number;
}
enOddOrEven CheckNumber(int Number) {

	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}
int SumEvenNumbersFrom1toN_Using_WhileStatement(int Number) {

	int Counter = 0;
	int Sum = 0;
	cout << "\nSum Even Numbers Using While Statement:\n";

	while (Counter < Number) {
		Counter++;
		if (CheckNumber(Counter) == enOddOrEven::Even) {
			
			Sum += Counter;
		}
	}
	return Sum;
}
int main() {

	int Number = ReadNumber();

    cout<<SumEvenNumbersFrom1toN_Using_WhileStatement(Number);

	return 0;
}