#include <iostream>
#include <ctime>

int main(){

int num;
int guess;
int tries = 0;

srand(time(NULL));
num =(rand() % 100) + 1;

do{
   std::cout << "Enter a number between 1-100: ";
   std::cin >> guess;
   tries++;

   if(guess > num){
   std::cout << "Guess is too high\n";
   }
   else if(guess < num){
   std::cout << "Guess is too low\n";
   }
   else{
    std::cout << "Correct! \nNumber of tries: " << tries << '\n';
   } 

}while(guess!= num);

return 0;
}