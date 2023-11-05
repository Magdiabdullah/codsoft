#include <iostream>
using namespace std;

const int sizeofboard = 3;
char board[sizeofboard][sizeofboard];


void initialboard() {
    for (int i = 0; i < sizeofboard; ++i) {
        for (int j = 0; j < sizeofboard; ++j) {
            board[i][j] = ' ';
        }
    }
}

void boarddisplay() {
    cout << "-------------\n";
    for (int i = 0; i < sizeofboard; ++i) {
        cout << "| ";
        for (int j = 0; j < sizeofboard; ++j) {
            if (board[i][j] == ' ') {

                cout << i * sizeofboard + j + 1;
            } else {

                cout << board[i][j];
            }
            cout << " | ";
        }
        cout << "\n-------------\n";
    }
}


bool winchecker(char plr) {

    for (int i = 0; i < sizeofboard; ++i) {
        if (board[i][0] == plr && board[i][1] == plr && board[i][2] == plr) {
            return true;
        }
        if (board[0][i] == plr && board[1][i] == plr && board[2][i] == plr) {
            return true;
        }
    }


    if (board[0][0] == plr && board[1][1] == plr && board[2][2] == plr) {
        return true;
    }
    if (board[0][2] == plr && board[1][1] == plr && board[2][0] == plr) {
        return true;
    }

    return false;
}


bool checkDraw() {
    for (int i = 0; i < sizeofboard; ++i) {
        for (int j = 0; j < sizeofboard; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

char switching(char currentPlayer) {
    return (currentPlayer == 'X') ? 'O' : 'X';
}

void plrinput(char plr, int& row, int& col) {

    boarddisplay();
    cout << "Player " << plr << ", please enter your position move  ";
    int position;
    cin >> position;

    row = (position - 1) / sizeofboard;
    col = (position - 1) % sizeofboard;
}

int main() {
    cout<<"**********************************************************"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"***********    WELCOME TO OUR TIC TAC GAME            ****"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"**********************************************************"<<endl;
    char currentPlayer = 'X';
    bool gameWon = false;
    int row, col;


    do {
        initialboard();


        do {
            plrinput(currentPlayer, row, col);

            if (row < 0 || row >= sizeofboard || col < 0 || col >= sizeofboard || board[row][col] != ' ') {
                cout << "this an invalid choice move . please try again .\n";
            } else {
                board[row][col] = currentPlayer;


                if (winchecker(currentPlayer)) {
                    boarddisplay();
                    cout << "  Well done! Player " << currentPlayer << " wins!\n";
                    gameWon = true;
                    break;
                }


                if (checkDraw()) {
                    boarddisplay();
                    cout << " wooow game turned into draw !\n";
                    gameWon = true;
                    break;
                }

                currentPlayer = switching(currentPlayer);
            }
        } while (!gameWon);


        char playAgain;
        cout << "Would you like to play again? enter 'y' for yes and 'n' for no";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }

    } while (true);

    return 0;
}
