#include <iostream>
using namespace std;


int main() {
    int s = 6; //my secret number
    int num;
    
    while (num != s) {
        cout << "Guess a number 1-10: " << endl;
        cin >> num;
    
        if (num < 1 || num > 10) {
            cout << "Invalid number" << endl;
        }
        //lower than secret number
        else if (num < s) {
            cout << "Too low!" << endl;
        }
        //higher than secret number
        else if (num > s) {
            cout << "Too high!" << endl;
        }
        else {
            cout << "Correct! Well done." << endl;
        }
    }
return 0;
}

