#include <iostream>

using namespace std;

int main() {
  // Get the two numbers from the user
  int num1, num2;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  // Get the operation from the user
  char operation;
  cout << "Enter the operation (+, -, *, /): ";
  cin >> operation;

  // Perform the calculation
  int result;
  switch (operation) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if (num2 == 0) {
        cout << "Error: division by zero" << endl;
        return 1;
      }
      result = num1 / num2;
      break;
    default:
      cout << "Error: invalid operation" << endl;
      return 1;
  }

  // Print the result
  cout << "The result is: " << result << endl;

  return 0;
}