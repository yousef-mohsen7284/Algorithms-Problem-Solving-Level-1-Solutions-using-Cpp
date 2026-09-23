#include<iostream>
#include<string>

using namespace std;

int ReadNumberinRange(int From, int To) {

	int Grade;
	do
	{
		cout << "Please Enter Your Grade between 0 and 100\n";
		cin >> Grade;
	} while (Grade<From || Grade>To);

	return Grade;
}


char GetGradeLetter(int Grade) {

	if (Grade >= 90)
		return'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return'D';
	else if (Grade >= 50)
		return'E';
	else
		return 'F';
}



int main() {

	int Number = ReadNumberinRange(0, 100);
	char Grade = GetGradeLetter(Number);
	
	cout << endl << "Result= " << Grade << endl;

	return 0;

}