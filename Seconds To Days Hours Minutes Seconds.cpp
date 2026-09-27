#include<iostream>
#include<string>

using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumbeOfMinutes, NumberOfSeconds;
};

float ReadPositiveNumber(string Message)
{

	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.NumbeOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}


void PrintTaskDurationDetails(strTaskDuration SecondsToTaskDuration)
{

	cout << "\n" << SecondsToTaskDuration.NumberOfDays << ":"
		<< SecondsToTaskDuration.NumberOfHours << ":"
		<< SecondsToTaskDuration.NumbeOfMinutes << ":"
		<< SecondsToTaskDuration.NumberOfSeconds << endl;
}



int main()
{
	int TotalSeconds = ReadPositiveNumber("Please Enter Number Of Total Seconds?");

	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));


	return 0;
}