#include <iostream>
using namespace std;

// ANSI color codes
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string BLUE = "\033[34m";
const string YELLOW = "\033[33m";

int main() {
    int number;

    // Fancy heading
    cout << BLUE << "✨🌟 " << YELLOW << "Even Number Checker" << BLUE << " 🌟✨" << RESET << endl;

    // Input prompt
    cout << GREEN << "Enter a number: " << RESET;
    cin >> number;

    // Check if the number is even
    if (number % 2 == 0) {
        cout << YELLOW << "✅ " << GREEN << number << " is even! " << BLUE << "🎉" << RESET << endl;
    } else {
        cout << RED << "❌ " << number << " is odd. " << "🙁" << RESET << endl;
    }

    // Closing message
    cout << BLUE << "✨ Thanks for using the checker! ✨" << RESET << endl;

    return 0;
}
