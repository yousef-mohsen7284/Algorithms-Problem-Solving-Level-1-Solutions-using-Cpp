#include<iostream>
#include<string>
using namespace std;

string ReadName() {
	string Name;
	cout << "Please Enter Your Name ?\n";
	getline(cin, Name);

	return Name;
}

void PrintName(string Name) {

	cout << "\nYour Name is:" << Name;
}


int main() {


	PrintName(ReadName());

}