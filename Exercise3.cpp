#include <iostream>
using namespace std;

int main() { 
  int x,y,z;
  cout<<"the value of x is: ";
  cin>>x;
  cout<<"the value of y is: ";
  cin>>y;
  z = x;
  x = y;
  y = z;
  cout<< "the value of x is: "<< x << endl ;
  cout<< "the value of y is: "<< y ;

}