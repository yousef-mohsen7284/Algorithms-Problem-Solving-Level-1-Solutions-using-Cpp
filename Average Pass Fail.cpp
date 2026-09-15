#include<iostream>
using namespace std;

enum enPassOrFail { Pass = 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
	cout << "Please Enter Mark 1?\n";
	cin >> Mark1;
	cout << "Please Enter Mark 2?\n";
	cin >> Mark2;
	cout << "Please Enter Mark 3?\n";
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3) {

	return Mark1 + Mark2 + Mark3;
}

float AverageOfMarksCalculation(int Mark1,int Mark2,int Mark3) {

	return (float)SumOf3Marks(Mark1, Mark2, Mark3)/3;
}

enPassOrFail PassOrFailCheck(float Average) {

	if (Average >= 50)
		return enPassOrFail::Pass;
	else
		return enPassOrFail::Fail;
}

void PrintAverageAndCondition(float Average) {
	
	cout << "\nAverage of Marks = " << Average << endl;

	if (PassOrFailCheck(Average) == enPassOrFail::Pass)
		cout << "\nYou Passed!\n";
	else
		cout << "\nYou Failed!\n";
}


int main() {
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintAverageAndCondition(AverageOfMarksCalculation(Mark1, Mark2, Mark3));

	return 0;
}