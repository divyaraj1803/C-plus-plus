#include <iostream>

int main(){
  int num;
  do{
    std::cout << "Enter a odd number: ";
    std::cin >> num;
  }while(num % 2 == 0);

  std::cout << "The odd number is : " << num;

  return 0;
}