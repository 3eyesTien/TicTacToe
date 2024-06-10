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
    std::cout << "Hello World!\n";
}