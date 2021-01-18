#include <iostream>
using namespace std;

int fib (int n){
  int result ;
  if(n<=0) 
    result = 0;
  else if(n==1)
    result = 1;
  else 
    result = fib(n-1)+fib(n-2);
  return result;
}

int main(){
  int n;

  cout<< "the sequence of n is :" ;
  cin>> n ;
  int ret = fib(n);
  cout<<"the value of the " <<n<<"th number is " << ret ;
}