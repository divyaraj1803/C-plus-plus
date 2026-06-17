#include <iostream>

void happyBirthday(std::string x);

int main(){
  std::string name = "Divya Raj";
  happyBirthday(name);
  happyBirthday(name);
  happyBirthday(name);
}

void happyBirthday(std::string x){
  std::cout << "Happy Birthday to " << x << '\n' << '\n' ;
}
