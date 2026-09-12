#include<iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark() {
	int Mark;
	cout << "Please Enter Your Mark?\n";
	cin >> Mark;
	return Mark;
}

enPassFail PassorFail(int Mark) {

	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark) {

	if (PassorFail(Mark) == enPassFail::Pass)
		cout << "\nYou Passed!\n";
	else
		cout << "\nYou Failed!\n";
}


int main() {
	PrintResult(ReadMark());
	

	return 0;
}