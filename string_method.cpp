#include <iostream>

int main(){
  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  
  name.insert(0,"a");

  std::cout << "my name is " << name;
  return 0;
}