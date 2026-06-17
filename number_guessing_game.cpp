#include <iostream>
#include <ctime>

int main(){
  int num,tries;
  srand(time(0));
  int randnum;
  randnum = (rand() % 1000) + 1;

  do{
    std::cout << "Enter a guess: ";
    std::cin >> num;
    tries++;

    if(num > randnum){
      std::cout << "Too High!" << '\n';
    }

    else if(num < randnum){
      std::cout << "Too Low!" << '\n';
    }

    else{
      std::cout << "You guessed it in " << tries << " tries" << '\n' << "The number was " << num ;
    }
  }while(num != randnum);
  return 0;
}