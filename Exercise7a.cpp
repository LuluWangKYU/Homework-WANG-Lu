#include <iostream>
using namespace std;

int a, n ;
int recall_times=0;
int my_pow(int a,int n)
{
	if(n>0)
	{ recall_times++;
		return my_pow(a,n-1)*a;  
	}
	else{
    recall_times++;
    return 1;}
}
 
 
int main(void)
{	
  cout<< "the value of a is :" ;
  cin>> a ;
  cout<< "the value of n is :" ;
  cin>> n ;
	int ret = my_pow(a,n);
	cout<<"the value of the " << a << "^" << n <<" is "<< ret <<endl;
  cout<<"the times of recalls using first formula is: " << recall_times ;

	return 0;
}
