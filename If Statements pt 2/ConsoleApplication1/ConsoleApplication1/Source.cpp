
#include <Windows.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int myChoice;
	int computerSelection;
	int computerRandNumb;

	srand(time(0));

	cout << "Welcome to rock, paper, scissors." << endl;
	do
	{
		cout << "What is your choice?\n" << "1) rock\n 2) scissors\n 3) paper\n";
		cin >> myChoice;
	} while (myChoice < 1 || myChoice > 3);

	//-----------------------------------------computer generator---------------------------------------------------------------------
	computerRandNumb = rand() % 3 + 1;
	if (computerRandNumb == 1)
		computerSelection = 1; //rock
	else if (computerRandNumb == 2)
		computerSelection = 2; //scissors
	else
		computerSelection = 3; //paper

							   //-----------------------------------------end of computer generator----------------------------------------------------------------

	if (myChoice == 1)
	{
		if (computerSelection == 1)
			cout << "You chose rock, your opponent chose rock. Its a draw!\n";
		else if (computerSelection == 2)
			cout << "You chose rock, your opponent chose scissors. Rock crushes scissors. You win!\n";
		else
			cout << "You chose rock, your opponent chose paper. Paper win against rock. Your lose!\n";
	}
	else if (myChoice == 2)
	{
		if (computerSelection == 1)
			cout << "You chose scissors, your opponent chose rock. Rock smashes scissors. You lose!\n";
		else if (computerSelection == 2)
			cout << "You chose scissors, your opponent chose scissors. Its a draw!\n";
		else
			cout << "You chose scissors, your opponent chose paper. Scissors win against paper. You win!\n";
	}
	else
	{
		if (computerSelection == 1)
			cout << "You chose paper, your opponent chose rock. Paper win against rock. You win!\n";
		else if (computerSelection == 2)
			cout << "You chose paper, your opponent chose scissors. Scissors win against paper. You lose!\n";
		else
			cout << "You chose paper, your opponent schose paper. Its a draw!\n";
	}
	cout << "Thank you for playing!\n";
	system("PAUSE");
}