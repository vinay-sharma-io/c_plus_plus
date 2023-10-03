#include <iostream>
using namespace std;

class Casino
{
    int availBalance;
    int bettingAmount;
    int guessedNumber;
    int dice;
    string userName;
    char choice;

public:
    void rules(void);
    void input(void);
    void betting(void);
};
void Casino::rules(void)
{
    cout << "Welcome!! to Casino..." << endl
         << "-----Rules of the Game:----- " << endl
         << "1. You have to guess a number " << endl
         << "2. If you guessed the right number you will get 10x of your amount " << endl
         << "3. If you lose you will loss your total amount!" << endl;
}
void Casino::input(void)
{
    cout << "Enter your name : " << endl;
    cin >> userName;
    cout << "Hello " << userName << " Enter Your totalbalance Amount : " << endl;
    cin >> availBalance;
    cout << "Enter Your Bet Amount : " << endl;
    cin >> bettingAmount;
}
void Casino::betting(void)
{
    do
    {
        do
        {

            if (availBalance >= bettingAmount)
            {
                cout << "Guess Your Number : " << endl;
                cin >> guessedNumber;
                dice = rand() % 10 + 1; // generate 10 numbers between 1 to 10
                if (dice == guessedNumber)
                {
                    cout << "You won!!" << endl;
                    cout << "You got $" << bettingAmount * 10 << endl;
                    availBalance = availBalance + bettingAmount * 10;
                    cout<<"Your available balance is "<<availBalance<<endl;
                }
                else
                {
                    if (guessedNumber > dice)
                    {
                        cout << "Your number is higher than dices num, try again next time !!" << endl;
                    }
                    else
                    {
                        cout << "Your number is lower than dices num, try again next time !!" << endl;
                    }
                    cout << "Sorry,you lost.\nBetter Luck next time...\n"<<endl;
                    availBalance = availBalance - bettingAmount;
                    cout <<"Your Available Balance Is "<<availBalance<<endl;
                }
            }
            else
            {
                cout << "Available balance is less than your bet amount " << endl;
            }

        } while (availBalance >= bettingAmount);
        // check balance
        if (availBalance == 0)
        {
            cout << "Your Balance is 0";
            break;
        }
        cout<<"Your balance is " <<availBalance<<" you want to play Again(Y/N)"<<endl;
        cin>>choice;
    } while (choice == 'Y' || choice == 'y');
}
int main()
{
    Casino c;
    system("cls");
    c.rules();
    c.input();
    c.betting();

    return 0;
}