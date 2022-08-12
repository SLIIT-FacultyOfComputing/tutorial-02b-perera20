/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
#include <string>
int longFactorial(int no){
  if (no > 0) 
       return no + longFactorial(no - 1);
  else 
       return 0;
  }

int longnCr(int n, int r){
  int nCr;
  nCr = r * (n-r);
  return 0;
}

int main() {
  
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;

  int num = longFactorial(n);
  std::cout << n ;
  return 0;

  int nCr = longnCr(n,r);
  std::cout << nCr ;
  return 0;
  
}
