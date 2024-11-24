#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to determine the winner
string determine_winner(string player_choice, string computer_choice) {
    if (player_choice == computer_choice) {
        return "It's a tie!";
    } else if ((player_choice == "stone" && computer_choice == "scissors") ||
               (player_choice == "scissors" && computer_choice == "paper") ||
               (player_choice == "paper" && computer_choice == "stone")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

// Main game function
int main() {
    // Array of choices
    string choices[] = {"stone", "paper", "scissors"};
    
    // Seed for random number generation
    srand(time(0));

    // Player's choice
    string player_choice;
    cout << "Welcome to Stone, Paper, Scissors!" << endl;
    cout << "Enter your choice (stone, paper, or scissors): ";
    cin >> player_choice;

    // Validate player's choice
    if (player_choice != "stone" && player_choice != "paper" && player_choice != "scissors") {
        cout << "Invalid choice! Please select stone, paper, or scissors." << endl;
        return 1;
    }

    // Computer's choice
    string computer_choice = choices[rand() % 3];
    cout << "Computer chose: " << computer_choice << endl;

    // Determine and display the result
    string result = determine_winner(player_choice, computer_choice);
    cout << result << endl;

    return 0;
}
