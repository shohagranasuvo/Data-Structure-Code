#include <iostream>
#include <stack>
#include <string>
#include <cctype> // For isdigit()
using namespace std;

// ANSI color codes
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string BLUE = "\033[34m";
const string YELLOW = "\033[33m";

// Function to evaluate a postfix expression
int evaluatePostfix(const string& expression) {
    stack<int> s;

    for (char ch : expression) {
        if (isdigit(ch)) {
            // If the character is a digit, push it onto the stack
            cout << GREEN << "Pushing: " << ch << RESET << endl;
            s.push(ch - '0'); // Convert char to int
        } else {
            // If the character is an operator, pop two operands
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            
            cout << YELLOW << "Performing operation: " << operand1 << " " << ch << " " << operand2 << RESET << endl;

            // Perform the operation
            switch (ch) {
                case '+': s.push(operand1 + operand2); break;
                case '-': s.push(operand1 - operand2); break;
                case '*': s.push(operand1 * operand2); break;
                case '/': s.push(operand1 / operand2); break;
                default: 
                    cout << RED << "Invalid operator: " << ch << RESET << endl;
                    return -1;
            }
        }
    }

    // The final result will be at the top of the stack
    return s.top();
}

int main() {
    string postfixExpression;

    cout << BLUE << "Enter a postfix expression (e.g., 231*+9-): " << RESET;
    cin >> postfixExpression;

    int result = evaluatePostfix(postfixExpression);

    cout << BLUE << "The result is: " << GREEN << result << RESET << endl;

    return 0;
}
