#include<iostream>
using namespace std;
int main()
{
    // Declare and initialize variables
int n = 0; // The current number
int sum = 0; // The sum of even numbers

// Use a while loop to iterate until n reaches 100
while (n <= 100) {
  // Check if n is even
  if (n % 2 == 0) {
    // Add n to the sum
    sum += n;
  }
  // Increment n by 1
  n++;
}

// Print the sum of even numbers
cout << "The sum of even numbers from 0 to 100 is " << sum << endl;
return 0;
}