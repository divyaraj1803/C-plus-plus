#include <iostream>

void pizza();
void pizza(std::string topping1,int num);



int main(){
  pizza("pepperoni",12);
  return 0;

}

void pizza(){
  std::cout << "PIZZA\n";
}
void pizza(std::string topping1,int num){
  std::cout << topping1 << " PIZZA\n" << num;
}
