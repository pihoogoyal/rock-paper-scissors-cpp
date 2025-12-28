#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getComputerChoice() {
    return rand() % 3; // 0,1,2
}

string choiceToString(int choice) {
    if (choice == 0) return "Rock";
    if (choice == 1) return "Paper";
    return "Scissors";
}

int main() {
    srand(time(0));
    int userChoice;
    char playAgain;

    do {
        cout << "\nRock Paper Scissors Game\n";
        cout << "0. Rock\n";
        cout << "1. Paper\n";
        cout << "2. Scissors\n";
        cout << "Enter your choice (0-2): ";
        cin >> userChoice;

        if (userChoice < 0 || userChoice > 2) {
            cout << "Invalid choice.\n";
            continue;
        }

        int computerChoice = getComputerChoice();

        cout << "You chose: " << choiceToString(userChoice) << endl;
        cout << "Computer chose: " << choiceToString(computerChoice) << endl;

        if (userChoice == computerChoice) {
            cout << "It's a draw!\n";
        } 
        else if (
            (userChoice == 0 && computerChoice == 2) ||
            (userChoice == 1 && computerChoice == 0) ||
            (userChoice == 2 && computerChoice == 1)
        ) {
            cout << "You win!\n";
        } 
        else {
            cout << "Computer wins!\n";
        }

        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
