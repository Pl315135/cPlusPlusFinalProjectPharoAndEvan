	#include <iostream>
	#include <string>
	using namespace std;
	char TTT[3][3] = { '1','2','3','4','5','6','7','8','9' };
	char player = 'X';
	int a;
	
	void Draw()
	{
	
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << TTT[i][j] << " ";
			}
			cout << endl;
		}
	
	}
	void Input()
	{
		int choice;
		cout <<" It's " << player << " turn ." << "Enter any number on the field: ";
		cin >> choice;
		if (choice == 1)
		{
			
			if (TTT[0][0] == '1')
			{
				TTT[0][0] = player;
				 
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
						
			
		}
		else if (choice == 2)
		{
			if (TTT[0][1] == '2')
			{
				TTT[0][1] = player;
				
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
		}
		else if (choice == 3)
		{
			if (TTT[0][2] == '3')
			{
				TTT[0][2] = player;
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
			
		}	
		else if (choice == 4)
		{
			if (TTT[1][0] == '4')
			{
				TTT[1][0] = player;
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
		}
		else if (choice == 5)
		{
			if (TTT[1][1] = '5')
			{
				TTT[1][1] = player;
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
		}
		else if (choice == 6)
		{
			if (TTT[1][2] == '6')
			{
				TTT[1][2] = player;
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
		}
		else if (choice == 7)
		{
			if (TTT[2][0] = '7')
			{
				TTT[2][0] = player;
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
		}
		else if (choice == 8)
		{
			if (TTT[2][1] = '8')
			{
				TTT[2][1] = player;
			}
			else
			{
				cout << " Wrong position, try again " << endl;
				Input();
			}
		}
		else if (choice == 9)
		{
			if (TTT[2][2] = '9')
			{
				TTT[2][2] = player;
			}
			else
			{
				cout << " Wrong position, try again " << endl;

				Input();
			}
		}
			
	}
	void player2()
	{
		if (player == 'X')
		{
			player = 'O';
		}
		else
		{
			player = 'X';
		}
	}
	char Win()
	{
		//first player
		if (TTT[0][0] == 'X' && TTT[0][1] == 'X' && TTT[0][2] == 'X')
		{
			return'X';
		}
		else if (TTT[1][0] == 'X' && TTT[1][1] == 'X' && TTT[1][2] == 'X')
		{
			return'X';
		}
		else if (TTT[2][0] == 'X' && TTT[2][1] == 'X' && TTT[2][2] == 'X')
		{
			return'X';
		}
		else if (TTT[0][0] == 'X' && TTT[1][0] == 'X' && TTT[2][2] == 'X')
		{
			return 'X';
		}
		else if (TTT[0][1] == 'X' && TTT[1][1] == 'X' && TTT[2][1] == 'X')
		{
			return 'X';
		}
		else if (TTT[0][2] == 'X' && TTT[1][2] == 'X' && TTT[2][2] == 'X')
		{
			return 'X';
		}
		else if (TTT[0][0] == 'X' && TTT[1][1] == 'X' && TTT[2][2] == 'X')
		{
			return 'X';
		}
		else if (TTT[2][0] == 'X' && TTT[1][1] == 'X' && TTT[0][2] == 'X')
		{
			return 'X';
		}
		//second player
		if (TTT[0][0] == 'O' && TTT[0][1] == 'O' && TTT[0][2] == 'O')
		{
			return'O';
		}
		else if (TTT[1][0] == 'O' && TTT[1][1] == 'O' && TTT[1][2] == 'O')
		{
			return'O';
		}
		else if (TTT[2][0] == 'O' && TTT[2][1] == 'O' && TTT[2][2] == 'O')
		{
			return'O';
		}
		else if (TTT[0][0] == 'O' && TTT[1][0] == 'O' && TTT[2][0] == 'O')
		{
			return 'O';
		}
		else if (TTT[0][1] == 'O' && TTT[1][1] == 'O' && TTT[2][1] == 'O')
		{
			return 'O';
		}
		else if (TTT[0][2] == 'O' && TTT[1][2] == 'O' && TTT[2][2] == 'O')
		{
			return 'O';
		}
		else if (TTT[0][0] == 'O' && TTT[1][1] == 'O' && TTT[2][2] == 'O')
		{
			return 'O';
		}
		else if (TTT[2][0] == 'O' && TTT[1][1] == 'O' && TTT[0][2] == 'O')
		{
			return 'O';

		}
		return '?';
	}
	int main()
	{
		cout << " WELCOME TO TIC-TAC-TOE" << endl;
		a = 0;
		Draw();
		while (1)
		{
			a++;
			Input();
			Draw();
			if (Win() == 'X')
			{
				cout << " X Wins " << endl;
				break;
			}
			else if (Win() == 'O')
			{
				cout << " O Wins " << endl;
				break;
			}
			else if (Win() == '?' && a == 9)
			{
				cout << " It's a tie " << endl;
				break;
			}
			player2();

		}
		system("pause");

		return 0;
	}