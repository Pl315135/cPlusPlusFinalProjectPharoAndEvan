//Main 
//Authors: Evan J. Raker & Phero Luong
//Date: 10/8/2018
#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	double choice = 0;
	do {
		cout << "What game would you like to Play? \n 1 = GoFish, 2 = Tic Tac Toe, 3 = Leave" << endl;
		cin >> choice;
		if (choice == 1) {
			goFish();
		}
		else if ( choice == 2){
			TicTacToe();
		}
		else {
			cout << "That input is not recognized, please try again."<< endl;
		}
		
	} while (choice != 3);

	system("pause");
	return 0;
}