//Tic-Tac-Toe Game

#include <iostream>
using namespace std;

// Function to print the Tic-Tac-Toe board
void printBoard(char board[3][3]) {
	cout << "Choose Between 1 to 9..." <<endl;
    cout << "    *   * " << endl;
    cout << "  " << 1 << " * " << 2 << " * " << 3 << endl;
    cout << "* * * * * * * " << endl;
    cout << "  " << 4 << " * " << 5 << " * " << 6 << endl;
    cout << "* * * * * * * " << endl;
    cout << "  " << 7 << " * " << 8 << " * " << 9 << endl;
    cout << "    *   * " << endl;
    cout << endl;

    cout << "Board Layout:" << endl;
    // Now print the Tic-Tac-Toe board with X and O
    cout << "    *   * " << endl;
    cout << "  " << board[0][0] << " * " << board[0][1] << " * " << board[0][2] << endl;
    cout << "* * * * * * * " << endl;
    cout << "  " << board[1][0] << " * " << board[1][1] << " * " << board[1][2] << endl;
    cout << "* * * * * * * " << endl;
    cout << "  " << board[2][0] << " * " << board[2][1] << " * " << board[2][2] << endl;
    cout << "    *   * " << endl;
}

// Function to check if a player has won
bool checkWin(char board[3][3], char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||  // Check rows
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) { // Check columns
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||  // Left to right diagonal
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) { // Right to left diagonal
        return true;
    }
    return false;
}

// Function to check if the board is full
bool isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {  // If there's any empty space, return false
                return false;
            }
        }
    }
    return true;
}

// Function to take player's move
void playerMove(char board[3][3], char player) {
    int ch,row,col;
    while (true) {
        cout << "Player " << player << ", enter your choice : ";
        cin >> ch;
        switch (ch){
        	case 1:
        		row = 0; 
        		col = 0;
        		break;
        	case 2:
        		row = 0; 
        		col = 1;
        		break;
        	case 3:
        		row = 0; 
        		col = 2;
        		break;
        	case 4:
        		row = 1; 
        		col = 0;
        		break;
        	case 5:
        		row = 1; 
        		col = 1;
        		break;
        	case 6:
        		row = 1; 
        		col = 2;
        		break;
        	case 7:
        		row = 2; 
        		col = 0;
        		break;
        	case 8:
        		row = 2; 
        		col = 1;
        		break;
        	case 9:
        		row = 2; 
        		col = 2;
        		break;
        	default:
        		cout<<"Invalid move. Please try again" << endl;
		}
    
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = player;
            break;
        } else {
            cout << "An Error Occured...Please Restart The Game." << endl;
        }
    }
}

int main() {
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} }; // Initialize empty board
    char currentPlayer = 'X';
    
    while (true) {
        printBoard(board);  // Display the current board
        playerMove(board, currentPlayer);  // Ask the current player for a move
        
        if (checkWin(board, currentPlayer)) {  // Check if the current player has won
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }
        
        if (isBoardFull(board)) {  // Check if the board is full (tie game)
            printBoard(board);
            cout << "It's a tie!" << endl;
            break;
        }
        
        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
