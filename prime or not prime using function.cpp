#include <iostream>
using namespace std;
char isPrime(int num);

int main(){
   int num;
   char f;
   cout<<"Enter a number(should be positive integer): ";
   cin>>num;
   f = isPrime(num);
   if (f==true)
      cout<<num<<" is a prime number";
   else
      cout<<num<<" is not a prime number";
   return 0;
}
char isPrime(int num){
    char f=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          f = false;
          break;
       }
    }
    return f;
}
