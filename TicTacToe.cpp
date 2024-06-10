// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

void drawBoard(char* spaces); // Pointer to array called spaces. Spaces is a 1-dimensional array
void playerMove(char* spaces, char player);
void computerMove(char* spaces, char computer);
bool checkWinner(char* spaces, char player, char computer);
bool checkTie(char* spaces);


int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool gameActive = true;

    drawBoard(spaces); //When an array is passed into a function, it decays into a pointer due to how we defined the function
    
    while (gameActive) {
        playerMove(spaces, player);
        drawBoard(spaces); // Draw board again after player move to reflect changes
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
    int number;
    do {
        std::cout << "Enter a spot to place a marker (1 - 9): ";
        std::cin >> number;
        number--; // Decrement since arrays start at 0

        if (spaces[number] == ' ')
        {
            spaces[number] = player; // Set space to player's marker
            break;
        }
    } while (!number > 0 || !number < 8); // Can only enter number between 0 and 8
}

void computerMove(char* spaces, char computer) {

}
bool checkWinner(char* spaces, char player, char computer) {

    return 0;
}
bool checkTie(char* spaces) {

    return 0;
}