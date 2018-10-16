#include <string>
#include <iostream>
#include <conio.h>
#include <graphics.h>

using namespace std;
int ticTacToe()
{
	int maxX;
	int maxY;
	enum shape {X,O};
	enum players { player1, player2 };
	int board[9] = { -1 };
	int gameOver = 0;
	int turn = player1;
	int currentMode = X;
	int userBlockChoice;
	int gameCounter = 0;

	void plotBoard();
	void plotShape(shape s, int block);

	int board()
	{
		int graphicMaker = DETECT, graphicMode;
	}

	

	system("pause");
	return 
}