/*
Write a program to demonstrate a Rock Paper Scissor Game
*/
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

class game
{
	
	public :
		int getUserChoice() 
		{
			string name;
			cout<<"Enter a name : "<<endl;
			cin>>name;
	    	int choice;
	    	cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
	    	cin >> choice;
	    	return choice;
		}

		int getComputerChoice() 
		{
	    	srand(time(0));
		    return rand()%3+1;
		}
	
		void determineWinner(int userChoice, int computerChoice) 
		{
	    	cout << "\n Computer chose: ";
	    	switch (computerChoice) 
			{
	        	case 1:
	            	cout << "Rock";
	            	break;
	        	case 2:
	            	cout << "Paper";
	            	break;
	        	case 3:
	            	cout << "Scissors";
	            	break;
	    	}
	
	    	cout << "\n You chose: ";
	    	switch (userChoice)
			{
	        	case 1:
	            	cout << "Rock";
	            	break;
	        	case 2:
	            	cout << "Paper";
	            	break;
	        	case 3:
	            	cout << "Scissors";
	            	break;
	    	}
	
	    	cout << endl;
	    	if (userChoice == computerChoice) 
			{
	        	cout << "It's a tie!" << endl;
	    	} 
			else if ((userChoice == 1 && computerChoice == 3) ||(userChoice == 2 && computerChoice == 1) ||(userChoice == 3 && computerChoice == 2)) 
			{
	        	cout << "You win!" << endl;
	    	} 
			else 
			{
	        	cout << "Computer wins!" << endl;
	    	}
		}	
};

main() 
{
	game g1;

    int userChoice, computerChoice,n;
	char playAgain;
    cout << "Welcome to Rock, Paper, Scissors Game!" << endl;
	cout<<"how many rounds u wants to play : "<<endl;
	cin>>n;
    for(int i=0;i<n;i++)
	{
		userChoice = g1.getUserChoice();
    	computerChoice =g1.getComputerChoice();
    	g1.determineWinner(userChoice,computerChoice);
	}
}
