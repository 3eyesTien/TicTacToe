// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

void drawBoard(char* spaces); // Pointer to array called spaces. Spaces is a 1-dimensional array
void playerMove(char* spaces, char player);
void computerMove(char* spaces, char computer);
bool checkWinner(char* spaces, char player, char computer);
bool checkTie(char* spaces);
void refreshBoard(char* spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool gameActive = true;

    refreshBoard(spaces); //When an array is passed into a function, it decays into a pointer due to how we defined the function
    
    while (gameActive) {
        playerMove(spaces, player);
        refreshBoard(spaces); // Draw board again after player move to reflect changes

        if (checkWinner(spaces, player, computer)) {
            gameActive = false;
            break;
        }

        computerMove(spaces, computer);
        refreshBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            gameActive = false;
            break;
        }
    }
    
    return 0;
}

void drawBoard(char* spaces) {
    std::cout << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " <<  "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  "  << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " <<  "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "\n";
}

void playerMove(char* spaces, char player) {
    int choice; // choice to place the marker on the board
    do {
        std::cout << "Enter a spot to place a marker (1 - 9): ";
        std::cin >> choice;
        choice--; // Decrement since arrays start at 0

        if (spaces[choice] == ' ')
        {
            spaces[choice] = player; // Set space to player's marker
            break;
        }
    } while (!choice > 0 || !choice < 8); // Can only enter number between 0 and 8
}

void computerMove(char* spaces, char computer) {
    int choice;
    srand(time(0)); // Seed to generate random number for computer move

    while (true) {
        choice = rand() % 9; // Generate random number between 0 and 9
        if (spaces[choice] == ' ')
        {
            spaces[choice] = computer;
            break;
        }
    }

}

bool checkWinner(char* spaces, char player, char computer) {

    // Check rows
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1] == spaces[2])) { // Check if first row is all the same character that isn't an empty space
        // Ternary operator to check if spaces[0] has the same char as player, and does the respective outcome
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4] == spaces[5])) { // Check if second row is all the same character that isn't an empty space        
        spaces[3] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7] == spaces[8])) { // Check if third row is all the same character that isn't an empty space        
        spaces[6] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }

    // Check columns
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3] == spaces[6])) {
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4] == spaces[7])) {
        spaces[1] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5] == spaces[8])) {
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }

    // Check diagonals
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4] == spaces[8])) {
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4] == spaces[6])) {
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose...\n";
    }

    return 0;
}
bool checkTie(char* spaces) {

    return 0;
}

void refreshBoard(char* spaces){
    system("cls");
    drawBoard(spaces);
}