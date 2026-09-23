#include<iostream>
#include<string>

using namespace std;

int ReadNumber() {

	int Number;
	cout << "Please Enter a Number?" << endl;
	cin >> Number;
	return Number;
}

int ReadPower() {

	int M;
	cout << "Please Enter Power Value?" << endl;
	cin >> M;
	return M;
}

int Powerof_M(int Number, int M) {

	if (M == 0)
	{
		return 1;
	}



	int P = 1;

	for (int i = 1;i <= M;i++) {
		P = P * Number;
	}
	return P;
}



int main() {

	int Number = ReadNumber();
	int M = ReadPower();


	cout << endl << "Result= " << Powerof_M(Number, M) << endl;

	return 0;

}