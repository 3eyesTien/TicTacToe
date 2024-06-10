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
    bool gameActive;

    drawBoard(spaces); //When an array is passed into a function, it decays into a pointer due to how we defined the function
    return 0;
}

void drawBoard(char* spaces) {
    std::cout << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << "  " << spaces[2] << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << "  " << spaces[5] << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << "  " << spaces[8] << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "\n";
}
void playerMove(char* spaces, char player) {

}
void computerMove(char* spaces, char computer) {

}
bool checkWinner(char* spaces, char player, char computer) {

    return 0;
}
bool checkTie(char* spaces) {

    return 0;
}