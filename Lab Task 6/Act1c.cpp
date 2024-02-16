#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool areParenthesesBalanced(string expr) {
    stack<char> s;
    char x;

    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            s.push(expr[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (expr[i]) {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return s.empty();
}

int main() {
    string expression;
    cout << "Enter a mathematical expression: ";
    cin >> expression;

    if (areParenthesesBalanced(expression))
        cout << "Parentheses are balanced.\n";
    else
        cout << "Parentheses are not balanced.\n";

    return 0;
}
