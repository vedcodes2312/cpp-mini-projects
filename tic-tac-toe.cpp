/*      TIC-TAC-TOE Game
Author:Ved Vyas       github:vedcodes2312       */
#include<iostream>
#include<cstdlib>
using namespace std;
int main() 
{
    system("cls");
    //this portion of code is a reference for user while execution
    const int rows = 3; 
    const int cols = 3; 
    int array[rows][cols]; 
 
    cout << "Indexing positions for reference of moves:" << endl;
     for (int a = 0; a < rows; a++) 
     {
         for (int b = 0; b < cols; b++)
          { 
            cout << "[" << a << "][" << b << "] "; 
          } cout << endl;
     }  

    char gameboard[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char current_player = 'X';
    int row,column;
    bool game_over = false;

    //to display the game board
    while (!game_over)   //logical operator : NOT
    {
      cout << "\n";
      for(int i=0; i<3; i++)
      {
        for(int j=0; j<3; j++)
        {
            cout << gameboard[i][j];
            if(j<2)  cout << " | ";
        }
        cout << "\n";
        if (i < 2)  cout << "--|---|--\n";
        }
      cout << "\n";

      //prompt the current player to enter their move
      cout << "Player " << current_player << ", enter your move (row and column,give a space between them): ";
      cin >> row >> column;

      //check if the move is valid or not as per the range
      if (row < 0 || row >= 3 || column < 0 || column  >=3 || gameboard[row][column] != ' ')
      {
        cout << "user your move is invalid,try again" << endl;
        continue;  //keyword to skip this iteration,ie,skip this step and continue
      }
      
      //update the game board according to the current player's move
      gameboard[row][column] = current_player;

      //checking for win
      bool win = false;
      for(int i=0; i<3; i++)
      {
        if ( (gameboard[i][0] == current_player && gameboard[i][1] == current_player && gameboard[i][2] == current_player) || 
                (gameboard[0][i] == current_player && gameboard[1][i] == current_player && gameboard[2][i] == current_player) ) 
            {
                win = true;
            }
        }
        if ( (gameboard[0][0] == current_player && gameboard[1][1] == current_player && gameboard[2][2] == current_player) || 
            (gameboard[0][2] == current_player && gameboard[1][1] == current_player && gameboard[2][0] == current_player)) 
        {
            win = true;
        }
        if (win) 
        {
            cout << "Player " << current_player << " wins!\n";
            game_over = true;
            continue;
        }

    //checking for a draw
    bool draw = true;
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                if (gameboard[i][j] == ' ') 
                {
                    draw = false;
                }
            }
        }
        if (draw) 
        {
            cout << "The game is a draw!\n";
            game_over = true;
            continue;
        }

        //switch the players(X,O)
        if (current_player == 'X')
         {
            current_player = 'O';
         } 
         else 
         {
            current_player = 'X';
         }
    }
    cout << "Thank you playing the game" <<endl;
   //asking the users,ie, players if they want to play the game again
   char play_again;
    cout << "Do you want to play again? (y for yes/n for n): ";
    cin >> play_again;

    if (play_again == 'y' || play_again == 'Y') 
    {
        main();      // Restart the game
    }

 else if (play_again == 'n' || play_again == 'N') 
    {
        cout << "The game has ended, see you soon" << endl;    // Restart the game
    }

     return 0;

    }    //end of code
    

    


      
     

               