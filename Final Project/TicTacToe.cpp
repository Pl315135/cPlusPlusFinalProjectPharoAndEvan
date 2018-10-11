#include <string>
#include <iostream>
using namespace std;
char TTT[3][3] = { '1','2','3','4','5','6','7','8','9', };
void Draw()
{
	cout << " Welcome to Tic Tac Toe " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << TTT[i][j] << " ";
		}
		cout << endl;
	}
}
void input()
{
	cout << "press "
}
int ticTacToe()
{
	Draw();
	system("pause");
	return 0;
}