#include <iostream>
using namespace std;
double x0;double v; double a; double t; int n; int sequence;

bool display_position()
{ 
  int sequence = 0;
  
  while (sequence < n ){
    double time_sum = sequence * t;
    double the_position = x0 + v*time_sum + 0.5*0.5*a*time_sum*time_sum;
    sequence++;
    cout<< " AT time "<< time_sum << " the position is "<< the_position <<endl ;
  }

}
  

int main() 
{
  cout << "enter the initial position,the speed and the acceleration :  ";
  cin >> x0 >> v >> a;
  cout << "how many times do you want to dispaly the position of the moving body ?  ";
  cin >> n;
  cout << "how often do you want to update the position of the moving object ?  " ;
  cin >> t;
  
  cout<< "Acceleration " << a*0.5 <<" Initial speed " << v << " Initial position "<< x0 << " Number of times " <<2*n <<" Delta "<<t<< endl;
  
  cout << display_position();
  return 0;
}
