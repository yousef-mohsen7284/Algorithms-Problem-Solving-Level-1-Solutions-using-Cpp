#include<iostream>
using namespace std;

struct stInfo {
	string firstname;
	string lastname;
};


stInfo ReadName() {

	stInfo Info;
	cout << "Please Enter Your First Name ?\n";
	cin >> Info.firstname;
	cout << "Please Enter Your Last Name ?\n";
	cin >> Info.lastname;
	return Info;
}

string FullName(stInfo Info,bool Reversed) {

	string FullName = " ";
	if(Reversed)
		FullName = Info.lastname + " " + Info.firstname + "\n";
	else
	FullName = Info.firstname + " " + Info.lastname + "\n";
	return FullName;
}

void PrintFullName(string FullName) {

	cout << "Your Full Name is: " << FullName << endl;
}


int main() {


	PrintFullName(FullName(ReadName(),false));

	return 0;
}