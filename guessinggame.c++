#include<iostream>
#include<cstdlib>   // for rand()
#include<ctime>     // for time()

using namespace std;

int main()
{
    int number, guess;

    srand(time(0));              // random seed
    number = rand() % 10 + 1;    // random number (1–10)

    cout << "Guess a number between 1 to 10\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > number)
            cout << "Too High!\n";
        else if(guess < number)
            cout << "Too Low!\n";
        else
            cout << "Correct Guess!\n";

    } while(guess != number);

    return 0;
}