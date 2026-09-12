#include<iostream>
using namespace std;

struct stInfo {
	int age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};

stInfo ReadInfo() {
	stInfo Info;
	cout << "Please Enter Your Age ?\n";
	cin >> Info.age;
	cout << "Do You Have a Driving License ?\n";
	cin >> Info.HasDrivingLicense;
	cout << "Do You Have a recommendation ?\n";
	cin >> Info.HasRecommendation;
	return Info;
}



bool IsAccepted(stInfo Info) {

	if (Info.HasRecommendation)
		return true;
	else
		return Info.age > 21 && Info.HasDrivingLicense;
}


void PrintResult(stInfo Info) {

	if (IsAccepted(Info))
		cout << "\nHired!" << endl;
	else
		cout << "\nRejected!" << endl;
}


int main() {

	PrintResult(ReadInfo());

	return  0;
}