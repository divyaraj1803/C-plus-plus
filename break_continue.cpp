#include <iostream>

int main(){
  for(int i = 10;i>=0;i--){
    if(i==3){
      // break;
      continue;
    }
    else{
      std::cout << i << '\n';
    }
  }
  return 0;
}