#include <iostream>
#include <random>

using std::endl;
using std::cin;
using std::cout;

int main () {
    int num_min, num_max;
    cout << "Welcome to the GUESSING GAME!" << endl;
    cout << "I will generate a number and you will guess it!" << endl;
    cout << "Please provide the smallest number:" << endl;
    cin >> num_min;
    cout << "Please provide the largest number:" << endl;
    cin >> num_max;

    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_int_distribution<> distribution(num_min, num_max);
    int num_gen = distribution(random_engine);
    //cout << "Generate random number = " << num_gen << endl;
    cout << "I've generated a number. Try to guess it!" << endl;
    int num_in; // user inputs number
    int count = 0;
    while (1) {
        count++;
        cout << "Please provide the next guess:" << endl;
        cin >> num_in;
        if (num_in == num_gen) {
            cout << "You've done it! You guessed the number " << num_gen << " in " << count << " guesses!" << endl;
            break;
        } else if (num_in < num_gen) {
            cout << "Your number is too small. Try again!" << endl;
        } else {
            cout << "Your number is too big. Try again!" << endl;
        }
    }
    return 0;
}