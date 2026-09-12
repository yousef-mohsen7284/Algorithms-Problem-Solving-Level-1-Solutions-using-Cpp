#include<iostream>
using namespace std;

struct stInfo {

	int age;
	bool HasDrivingLicense;
};


stInfo ReadInfo() {

	stInfo Info;
	cout << "Please Enter Your Age ?\n";
	cin >> Info.age;
	cout << "Do You Have a Driving License ?\n";
	cin >> Info.HasDrivingLicense;
	return Info;
}


bool IsAccepted(stInfo Info) {

	return(Info.age > 21 && Info.HasDrivingLicense);
}


void PrintResult(stInfo Info) {

	if (IsAccepted(Info))
		cout << "\nHired!" << endl;
	else
		cout << "\nRejected!" << endl;
}


int main() {

	PrintResult(ReadInfo());

	return 0;
}