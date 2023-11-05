#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int Us_Guess, R_num, To_attempts = 0, co_attempts = 0;
    char Repaly;
    string name;
    cout<<  "*****************************************************************************"<<endl;
    cout<<  "*****************************************************************************"<<endl;
    cout << "*********************WELCOME TO THE GUSSING NUMBER GAME.*********************"<<endl;
    cout<<  "*****************************************************************************"<<endl;
    cout<<  "*****************************************************************************"<<endl;
    cout << "These are the Rules:\n";

    cout <<"what is your name:"<<endl;
    cin>>name;

    cout << "2. You have to enter a number in RAND_MAX\n";

    do
    {

        cout << "Pick a number between 1 and " << RAND_MAX << ". Try to guess it.\n";
        R_num = rand() % RAND_MAX + 2;

        do
        {
            cout << "Please: Enter your guess: ";
            cin >> Us_Guess;
            To_attempts++;

            if (Us_Guess == R_num)
            {
                cout << "WOOOWWW!!!Congratulations! You guessed the correct number."<<endl;
                co_attempts++;
            }
            else if (Us_Guess < R_num)
            {
                cout << "oopsss!!!! number is Too low!!!! Try again."<<endl;
            }
            else
            {
                cout << "NOOO, number is Too high!!!! Try again."<<endl;
            }

        } while (Us_Guess != R_num);

        cout << "Would you like to Play Again ? Enter 'y' for yes, 'n' for no: ";
        cin >> Repaly;
        cout << endl;

        if (Repaly != 'n' && Repaly != 'y')
        {
            cout << "Input is not valid. Please enter 'Y' to play again or 'N' to exit."<<endl;
        }

    } while (Repaly != 'n');

    double Your_score = (co_attempts / static_cast<double>(To_attempts)) * 100.0;

    cout << "Your number of tries is : " << To_attempts << " times\n";
    cout <<name<< " You have scored : " << Your_score << "%\n";

    return 0;
}
