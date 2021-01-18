#include <iostream>
using namespace std;

int i, k, n;
int main ()
{
  cout<<"the value of n is : ";
  cin >> n;
  
  int i = 0 ;
  int k = 0 ;
    while(i<n) {
        i++; 
        {while(k<0.5*(i*i+i)){
          k++;
          cout<< k;}
        }
        cout << "\n";
        }
    
 return 0;

}