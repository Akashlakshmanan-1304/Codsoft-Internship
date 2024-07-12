#include <iostream>
#include <cstdlib>  
#include <ctime>     

using namespace std;

int main() {
    cout << "-------Guess the Number Game-------" << endl;
    cout << "I have picked a number between 1 and 100. Try to guess it!😁" << endl;
    srand(time(0));   
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Low! Try guessing higher." << endl;
        } else {
            cout << "High! Try guessing lower." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
