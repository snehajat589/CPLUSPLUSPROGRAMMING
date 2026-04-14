#include<iostream>
using namespace std;

int main()
{
    int vote, choice;
    int c1 = 0, c2 = 0, c3 = 0;

    do
    {
        cout << "\n1. Candidate 1\n2. Candidate 2\n3. Candidate 3\n";
        cout << "Enter your vote (1-3): ";
        cin >> vote;

        if(vote == 1)
            c1++;
        else if(vote == 2)
            c2++;
        else if(vote == 3)
            c3++;
        else
            cout << "Invalid vote\n";

        cout << "Press 1 to continue voting, 0 to stop: ";
        cin >> choice;

    } while(choice == 1);

    // Result
    cout << "\n--- Result ---\n";
    cout << "Candidate 1: " << c1 << " votes\n";
    cout << "Candidate 2: " << c2 << " votes\n";
    cout << "Candidate 3: " << c3 << " votes\n";

    return 0;
}