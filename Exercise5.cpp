#include <iostream>
using namespace std;

int main(){
  
  int k,n;

  cout<< "the sequence of n is :" ;
  cin>> n ;
  int i = 0;
  int j = 1;
  int g = 2;
  if (g<=n) {
    while (g<=n){
    g++;
    k = i+j;
    i = j;
    j = k;
    }
  }
  else {
    k = n; 
  }
  cout<<"the value of the " <<n<<"th number is " <<k;
}