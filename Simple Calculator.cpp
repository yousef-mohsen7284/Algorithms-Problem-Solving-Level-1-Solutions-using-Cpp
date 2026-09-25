#include<iostream>
#include<string>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message) {

	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}


enOperationType ReadOperationType() {

	char OT = '+';
	cout << "Please Enter Operation Type(+,*.-./)\n";
	cin >> OT;

	return (enOperationType)OT;
}


float Calculate(float Number1, float Number2, enOperationType OPType) {

	switch (OPType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}


int main() {

	float Number1 = ReadNumber("Please Enter Number 1:");
	float Number2 = ReadNumber("Please Enter Number 2:");


	enOperationType OPType = ReadOperationType();

	cout << "Result = " << Calculate(Number1, Number2, OPType) << endl;


	return 0;
}


