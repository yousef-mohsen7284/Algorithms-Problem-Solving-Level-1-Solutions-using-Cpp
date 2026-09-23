#include<iostream>
#include<string>

using namespace std;

int ReadNumber() {

	int Number;
	cout << "\nPlease Enter a Number?\n";
	cin >> Number;
	return Number;
}


void Power_2_3_4(int Number) {

	int a, b, c;
	
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;
	cout << a << " " << b << " " << c << endl;
}


int main() {


	Power_2_3_4(ReadNumber());

	return 0;

}