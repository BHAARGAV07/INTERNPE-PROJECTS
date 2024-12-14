#include <iostream>
using namespace std;
void display(char board[3][3],int row,int column)
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n";
}
void update(char board[3][3],int row,int column,int pos1,int pos2,char p1)
{
    board[pos1][pos2] = p1;
}
int xwin(char board[3][3], int row, int column) { 
    int flag=0;// Check diagonals
    if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) { flag=1;cout << "X wins" << endl << endl; } // Check rows 
    for (int i = 0; i < row; ++i) { if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') { flag=1;cout << "X wins" << endl << endl; } } // Check columns
    for (int i = 0; i < column; ++i) { if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') { flag=1;cout << "X wins" << endl << endl; } } 
    return flag;
}
int main() {
    char p1;
    cout<<"Enter your choice(X/O): ";
    cin>>p1;
    if(p1=='X')
    {
        cout<<"You selected X and Your friend is O"<<endl;
    }
    else {
        cout<<"You selected O and Your friend is X"<<endl;
    }
    int pos1,pos2,count=0,fg;
    char board[3][3] = {
        {' ',' ',' '},{' ',' ',' '},{' ',' ',' '}
    };
    do {
        cout<<"Enter "<<p1<<" grid position x: ";
        cin>>pos1;
        cout<<"Enter "<<p1<<" grid position y: ";
        cin>>pos2;
        
        update(board,3,3,pos1,pos2,p1);
        display(board,3,3);
        fg = xwin(board,3,3);
        count++;
        if(p1=='O')
        {
            p1='X';
        }
        else {
            p1='O';
        }
        if(fg==1)
        {
            break;
        }
    }
    while(count<9);

    return 0;
}
