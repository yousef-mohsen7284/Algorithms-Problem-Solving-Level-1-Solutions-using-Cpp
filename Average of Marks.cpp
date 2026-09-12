#include<iostream>
using namespace std;

void ReadMarks(int& mark1, int& mark2, int& mark3) {

	cout << "Please Enter Mark 1?\n";
	cin >> mark1;
	cout << "Please Enter Mark 2?\n";
	cin >> mark2;
	cout << "Please Enter Mark 3?\n";
	cin >> mark3;
}

int SumOf3Marks(int mark1, int mark2, int mark3) {
	return mark1 + mark2 + mark3;
}

float AverageOfMarks(int mark1, int mark2, int mark3) {
	return (float)SumOf3Marks(mark1, mark2, mark3) / 3;
}

void PrintAverage(float Average) {

	cout << "\nAverage of Marks is: " << Average << endl;
}

int main() {


	int mark1, mark2, mark3;

	ReadMarks(mark1, mark2, mark3);
	PrintAverage(AverageOfMarks(mark1, mark2, mark3));

	return 0;
}
