#include<iostream>
#include<string>

using namespace std;

struct stTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
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

stTaskDuration ReadTaskDuration()
{

	stTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number of Hours?");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number of Minutes?");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number of Seconds?");

	return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{

	int TaskDurationInSeconds = 0;
	TaskDurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	TaskDurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	TaskDurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	TaskDurationInSeconds += TaskDuration.NumberOfSeconds;

	return TaskDurationInSeconds;
}



int main()
{
	int TaskInSeconds = TaskDurationInSeconds(ReadTaskDuration());

	cout << "\nTask Duration In Secondes: " << TaskInSeconds << endl;
	return 0;
}
