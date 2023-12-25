/*
Write a program to demonstrate a Rock Paper Scissor Game
*/
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
// Function to get user choice
int getUserChoice() 
{
    int choice;
    cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> choice;
    return choice;
}

int getComputerChoice() 
{
    srand(time(0));
    return rand() % 3 + 1;
}
void determineWinner(int userChoice, int computerChoice) 
{
    cout << "Computer chose: ";
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

    cout << endl;

    cout << "You chose: ";
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

int main() 
{
    int userChoice, computerChoice;

    cout << "Welcome to Rock, Paper, Scissors Game!" << endl;

    do 
	{
        userChoice = getUserChoice();
        computerChoice = getComputerChoice();
        determineWinner(userChoice, computerChoice);
        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Thanks for playing! Goodbye." << endl;
            break;
        }
    } 
	while (true);
    
}
