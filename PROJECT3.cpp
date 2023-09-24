#include<bits/stdc++.h>
using namespace std;
int choice;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row,column;
bool draw = false;
void display_board(){
    system("cls");
    cout<< "TIC TAC TOE GAME"<<endl;
    cout<<"Player1 [X] \nPlayer2 [O]\n\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
    cout<<"     |     |     \n";
}
void player_turn(){
    if(turn == 'X'){
        cout<<"Player1 [X] turn :";

    }
    if(turn == 'O'){
        cout<<"Player2 [O] turn :";

    }
    
    cin>>choice;
    switch(choice){

        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break; 
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break; 
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;     
        default: cout << "\nInvalid Input!"; break;
    }
    if(turn == 'X' && board[row][column]!='X' && board[row][column]!='O'){
        board[row][column]='X';
        turn ='O';
        
    }    
    else if (turn=='O' && board[row][column]!='X' && board[row][column]!='O') {
        board[row][column]= '0';
        turn='X';
        
    }
else{

        cout<<"BOX ALREADY FILLED\n PLEASE TRY AGAIN!! \n\n ";
        player_turn();
    }

display_board();   
}
bool gameover() {
  // Checking win
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][0] == board[i][2] ||
        board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            return false;
    }
  }
  if (board[0][0] == board[1][1] && board[0][0] == board[2][2] ||
      board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
    return false;
  }

  // Checking draw
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] != 'X' && board[i][j] != 'O') {
        return true; // There are still empty cells, so the game is not a draw yet.
      }
    }
  }

  // All cells are filled, and no player has won, so it's a draw.
  draw = true;
  return false;
}
int main()
{
    
    while(gameover()){
        display_board();
        player_turn();
        gameover();
        
    }
    if(turn == 'X' && draw == false)
    {
        cout<<"PLAYER2 [O] WINS!! CONGRATULATIONS\n";
    }
    else if(turn == 'O' && draw == false)
    {
        cout<<"PLAYER1 [X] WINS!! CONGRATULATIONS\n";
    }
    else
    cout<<"GAME DRAW!!\n";
    
    return 0;
    
}