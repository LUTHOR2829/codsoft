#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));// statement used to change the random number at different time.


    int random=(rand()%100)+20;
    int guess=0;
    int moves=0;

    do
    {
        moves++;
        cout<<"ENTER YOUR GUESS";
        cin>>guess;//statement for taking input from user
        if(guess==random)
        {
            cout<< "Congrats! right guess after "<<moves<< "moves"<<endl;

        }
        else if(guess<random){
            cout<<"Guess is too low, PLEASE GUESS AGAIN"<<endl;

        }
        else
        {
            cout<<"Guess is too high,PLEASE GUESS AGAIN "<<endl;
        }
    } while (guess!=random);
    
    


}