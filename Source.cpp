

// Interactive Fiction.cpp : Defines the entry point for the console application.
//
//Stating my functions

#include <iostream>
#include <string>

using namespace std;
//Declaring my Variables
int GetNumberFromUser(string prompt);
string GetTextFromUser(string prompt);

int main()
{
	//Tell Story
	cout << "Weclome To The Temple of the Lost Tresure Game\n";
	cout << "Dr. Rios set out on an adventure with his crew in the jungles ";
	cout << "of South America to find the tresure of the Lost Tresure.\n";
	cout << "After Days of traveling through the jungle, him and his team found ";
	cout << "the Temple.\n";
	cout << "\nThey were faced with these Options: \n";

	//Start of the Loop
	bool IsProgramRunning = true;
	while (IsProgramRunning)
	{
		//Different Options that user gets to choose from
		int index = GetNumberFromUser("\nEnter a Number Between 1 and 5: \n");
		switch (index)
		{
		case 1:
			cout << "They Enter the temple and step on a booby trap, and are killed.\n";
			break;
		case 2:
			cout << "They Enter the Temple and Get passed all the booby traps, and recover the tresure.\n";
			break;
		case 3:
			cout << "After the Recover the tresure, they are sourounded by the local villagers, who are trying to protect the tresure.\n";
			break;
		case 4:
			cout << "They are too scared to enter and run away.\n";
			break;
		case 5:
			cout << "Exiting Program\n";
			IsProgramRunning = false;
			break;

		}
	}
	system("pause");
	return 0;
}
//recalling functions
int GetNumberFromUser(string prompt)
{
	cout << prompt;
	int var = 0;
	cin >> var;
	return var;
}
string GetTextFromUser(string prompt)
{
	cout << prompt;
	string var = "";
	cin >> var;
	return var;
}
