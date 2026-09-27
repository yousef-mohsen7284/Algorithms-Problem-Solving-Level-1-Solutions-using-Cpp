#include<iostream>
#include<string>

using namespace std;

enum EnDaysOfWeek {Sat=1,Sun=2,Mon=3,Tue=4,Wed=5,Thu=6,Fri=7};

int ReadNumberInRange(string Message,int From,int To)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	
	return Number;
}


EnDaysOfWeek ReadDayOfWeek()
{

	return (EnDaysOfWeek)ReadNumberInRange("Please Enter Day Number: Sat=1,Sun=2,Mon=3,Tue=4,Wed=5,Thu=6,Fri=7", 1, 7);
}

string GetDayOfWeek(EnDaysOfWeek ReadDayOfWeek)
{
	switch (ReadDayOfWeek)
	{
	case EnDaysOfWeek::Sat:
		return"Saturday";
	case EnDaysOfWeek::Sun:
		return "Sunday";
	case EnDaysOfWeek::Mon:
		return "Monday";
	case EnDaysOfWeek::Tue:
		return "Tuesday";
	case EnDaysOfWeek::Wed:
		return "Wednesday";
	case EnDaysOfWeek::Thu:
		return "Thursday";
	case EnDaysOfWeek::Fri:
		return "Friday";
	default:
		return"Not a Valid Day!";
	}
}


int main()
{

	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	return 0;
}
