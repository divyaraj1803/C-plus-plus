#include <iostream>

int main(){
  int marks;
  std::cout << "Enter your marks: ";
  std::cin >> marks;

  (marks>=50) ? std::cout << "PASSED!" :((marks<=25) ? std::cout << "FAILED!" : std::cout << "YOU BARELY PASSED!" );


  return 0;
}