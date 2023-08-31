#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void rules(){

   system ("cls");
    cout << "\t\t\t======================================\n";
    cout << "\t\t\t=====!CASINO GUESSING GAME RULES!=====\n";
    cout << "\t\t\t======================================\n";
    cout << "\t1. Guess the number between 1 to 10\n";
    cout << "\t2. Win 10 times the amount bet, if you guess the right number\n";
    cout << "\t3. Lose the amount bet, if you guess the wrong number\n\n\n";
}

int main(){

    string pName;
    int balance, guess, betAmount, dice;
    char choice;
    srand(time(0));

    cout << "\n\n\t\t=======================================\n";
    cout << "\n\n\t\t==WELCOME TO THE CASINO GUESSING GAME==\n";
    cout << "\n\n\t\t=======================================\n\n\n";
    cout << "Enter your name: ";
    cin >> pName;
    cout << "\n\n\n\n";
    cout << "Enter your balance amount: $";
    cin >> balance;


            do{
                system("cls");
                rules();
                cout << "Your current amount is $" << balance << "\n\n";
            //get player's betting balance
            do
            {
                cout << "===========================================\n\n";
                cout << "Hey!! " << pName <<". Enter your bet amount: $";
                cin >> betAmount;
                if(betAmount > balance){
                cout << "===========================================\n\n";
                    cout << "Your bet amount can't be more than your balance\n"
                            << "Re-enter bet amount!!!!\n";
                            }
            }while(betAmount > balance);
            // Get player's numbers
            do {
                cout << "Enter a guess number between 1 to 10: ";
                cin >> guess;
                   if(guess <= 0 || guess > 10)
                        cout << "Number should be between 1 to 10!!\n\n";
                }while(guess <= 0 || guess > 10);
                       dice = rand()%10 + 1;
                       if(guess == dice)
                       {
                          cout << "\n\nYou WON!!!!! Reward: $" << betAmount * 10 << " lucky bastard ha ha ha!";
                          balance = balance + betAmount * 10;
                       }else
                       {
                          cout << "\n\nYou LOSE HA HA HA HA!";
                          balance = balance - betAmount;
                       }
                cout << "\n\nThe winning number was " << dice << "\n";
                cout << pName << " You have a balance of $" << balance << endl;
                if(balance == 0){
                    cout << "You don't have money to play!";
                    break;
                }
                cout << "Do you wan't to play choose Y/n: ";
                cin >> choice;
            }while(choice == 'Y' || choice == 'y');
                    cout << "\n\n\n";
                    cout << "Thank you for playing this game. Your balance is $" << balance << "\n\n\n";

          return 0;

}
