/*
Meghan Moore
January 31, 2015
CIT 245 - Data Structures and Programming C++
Assignment 1 - Chapter 1
Purpose: Write a program that applies the Babylonion square root algorithm.
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
  double input, guess, r;
  
  //prompt user for input
  cout << "Enter a number and I will apply the Babylonian square root algorithm until I am within .001 of the correct answer.\n";
  cin >> input;
  cout << "You entered " << input << endl;
  
  //run algorithm
  guess = input/2;
  do{
    r = input/guess;
    guess = (guess+r)/2;
    cout << "Guessing " << guess << endl;
  } while ((guess * guess !> input - .001) && (guess * guess !< input + .001));
  
  //Display result
  cout << "The Babylonian algorithm produced " << guess << endl
    << "Checking: " << guess << " * " << guess << " = " << (guess * guess);
  
  system("pause");
  return 0;
}
