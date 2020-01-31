#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	char player1Choice;
//	char player2Choice;
//	char playAgain = 'y';
//
//	cout << "Simple Rock paper scissors game.\n";
//	cout << "R for rock\nP for paper\nS for scissors";
//
//	while (playAgain == 'y' || playAgain == 'Y')
//	{
//		cout << "\nPlayer 1 choice: ";
//	    err1:cin >> player1Choice;
//		//Though goto is not reccomended, it works well here. I think as long as they are labled them properly and dont go too far out of the way it can work right.
//
//		switch (player1Choice)
//		{
//		case 'r':
//		case 'R':
//			//redundant player 2 choices to make goto errors work cleaner
//			cout << "\nPlayer 2 choice: ";
//		    err2:cin >> player2Choice;
//			switch (player2Choice)
//			{
//			case 'r':
//			case 'R':
//				cout << "Both of you chose rock ! Tie.\n";
//				break;
//			case 'p':
//			case 'P':
//				cout << "Player 2's Paper wrapped up Player 1's Rock !\n";
//				break;
//			case 's':
//			case 'S':
//				cout << "Player 1's Rock broke Player 2's Scissors !\n";
//				break;
//			default:
//				cout << "That was not a correct choice, Player 2. Enter again: ";
//				goto err2;
//			}
//			break;
//		case 'p':
//		case 'P':
//			cout << "\nPlayer 2 choice: ";
//		    err3:cin >> player2Choice;
//			switch (player2Choice)
//			{
//			case 'r':
//			case 'R':
//				cout << "Player 1's paper wrapped up Player 2's Rock !\n";
//				break;
//			case 'p':
//			case 'P':
//				cout << "Both of you chose paper ! Tie.\n";
//				break;
//			case 's':
//			case 'S':
//				cout << "Player 2's Scissors cut up Player 1's Paper !\n";
//				break;
//			default:
//				cout << "That was not a correct choice, Player 2. Enter again: ";
//				goto err3;
//			}
//			break;
//		case 's':
//		case 'S':
//			cout << "\nPlayer 2 choice: ";
//		    err4:cin >> player2Choice;
//			switch (player2Choice)
//			{
//			case 'r':
//			case 'R':
//				cout << "Player 2's Rock beat up player 1's Scissors !\n";
//				break;
//			case 'p':
//			case 'P':
//				cout << "Player 1's Scissors shredded player 2's Paper !\n";
//				break;
//			case 's':
//			case 'S':
//				cout << "Both of you chose Scissors ! Tie.\n";
//				break;
//			default:
//				cout << "That was not a correct choice, player 2. Enter again: ";
//				goto err4;
//			}
//			break;
//		default:
//			cout << "That was not a correct choice, player 1. Enter again: ";
//			goto err1;
//		}
//		cout << "Do you want to play again? ";
//		cin >> playAgain;
//	}
//}