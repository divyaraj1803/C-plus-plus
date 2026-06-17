#include <iostream>
#include <cmath>

int main(){
  double a,b,c;
  std::cout << "Enter value of A: ";
  std::cin >> a;


  std::cout << "Enter value of B: ";
  std::cin >> b;

  c = sqrt(pow(a,2) + pow(b,2));
  std::cout << "the length of the hypotonus is " << c;
  return 0;

}