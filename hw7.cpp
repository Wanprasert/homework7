#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;
int main()
{
    int num, guess, count=0;
    cout <<"###Welcome to guessing number game###" <<endl;
    cout <<"Secret number has been chosen" <<endl;

    srand(time(NULL));
    num = 1+rand()%10;

    do
	{
        cout <<"Guess the number (1 to 10): ";
        cin >>guess;
        count++;
        if(num>guess)
        {
            cout <<"The secret number is lower" <<endl;
        }
        else if(num<guess)
        {
            cout <<"The secret number is higher" <<endl;
        }
    }
	while(num!=guess);

    cout <<"Congratulations!" <<endl;
    cout <<"The secret number is "<<num <<endl;
    cout <<"You made "<<count<<" guesses" <<endl;
    return(0);
}