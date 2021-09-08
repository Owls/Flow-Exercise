#include <iostream>

using std::cout;
using std::cin;

int main()
{
	//A brief, if not silly, intro duction to the game. 
	cout << "My dear traveller, you have arrived at the end of all things." << '\n';
	cout << "Here, you have a most unprescedented task ahead - you must guess the number of beans \n";
	cout << " that are located in this jar. Yes, there is a jar. No, I cannot show you. Now, let us begin.";

	cout << '\n';
	cout << '\n';

	//Define our variables. 
	int answer = 7; //The correct answer. 
	int guess; //The User's guess will be stored here, and compared to our answer. 
	bool notguessed = true; //While true, prompts USer to continue guessing. 

	//While loop will continue running until the correct answer is entered. 
	while (notguessed)
	{
		//Ask the User for input. 
		cout << "Please guess the number of beans you believe occupy the jar: ";

		// Store User's input to our variable. 
		cin >> guess;

		//If the User's answer is correct.
		if (guess == answer)
		{
			cout << "Congratulations!";
			notguessed = false;
		}

		//If the User's guess is greater or less than the answer, than it will display one of these.
		if (guess < answer)
		{
			cout << "Alas! You were short. Try again.\n";
		}

		if (guess > answer)
		{
			cout << "Alas! You overshot. Try again.\n";
		}
	}

}
