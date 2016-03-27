#include <iostream>
using namespace std;

void sumSquares(int);

// sumSquares - a recursive function that returns

// the sum of the squares from 0 to num

int main()

{ int num;

cout << "Please type in a positive integer: ";

cin >> num;

sumSquares(num);

system ("pause");

return 0; }

void sumSquares(int num)

{ int total;

if(num >= 0)

{ total = (pow(num,2) + pow(num,2));

cout << "Sum of the number: " << num << " squared is: " << total << endl; sumSquares(num - 1); } }
