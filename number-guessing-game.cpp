//NUMBER GUESSING GAME
// AUTHOR : VED VYAS        GITHUB:vedcodes2312

#include<iostream>
#include<ctime> //time header file
#include<cstdlib> //standard library
using namespace std; 
int main()
{
system("cls");
srand(time(0));  //seed the random number generator
int num = rand() % 100 + 1; //generate a random number of integer data type between 1 to 100
int tries = 0;
cout << "Hey user! welcome to the number guessing game!" << endl;
cout << "Try your hard to guess the number BEST OF LUCK! :)" << endl;
cout << "System is thinking of a number between 1 to 100" << endl;
START:
    int guess; //guess by the user
    cout << "Hey user,enter your guess: " << endl;
    cin >> guess;
    tries ++; //Increment in number of tries
    if(guess <1 || guess>100)
    {
        cout << "Hey user,enter a number between 1 to 100" << endl;
        goto START;
    }
    else if(guess > num)
    {
        cout << "Hey user,your guess is too high,please try again" << endl;
        goto START;
    }
    else if(guess < num)
    {
        cout << "Hey user,your guess is too low,please try again" << endl;
        goto START;
    }
    else
    {
        cout << "Hey user,you guessed it right! the number was " << num << endl;
        cout << "You took " << tries << " tries to guess the number" << endl;
        cout << "Thanks for playing the game,see you in next game!" << endl;

    }
return 0;

}       //end of code

