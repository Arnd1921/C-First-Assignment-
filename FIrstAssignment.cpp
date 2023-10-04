#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3, sum;

  // Prompt the user to enter three numbers
  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  cout << "Enter the third number: ";
  cin >> num3;

  // Calculate the sum of the three numbers
  sum = num1 + num2 + num3;

  // Output the sum to the user
  cout << "The sum of the two numbers is: " << sum << endl;

  return 0;
}
