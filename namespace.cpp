#include <iostream>

namespace divya{
  int age = 19;
  std::string name = "Divya Raj";
}

namespace avi{
  int age = 21;
  std::string name = "Avi Kumar";
} 

int main(){
  using namespace divya;
  std::cout << "My name is " << avi::name << "." << '\n';
  std::cout << "I am " << avi::age << " old." << '\n';

}