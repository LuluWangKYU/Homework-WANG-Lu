#include <iostream>
using namespace std;

int main() 
{
  double x,y,radium,x0,y0,The_distance;
  cout << "The center of circle x co-ordinate is: ";
  cin >> x0;
  cout << "The center of circle y co-ordinate is: ";
  cin >> y0;
  cout << "The radium of circle  is: ";
  cin >> radium;
  cout << "The point A x co-ordinate is: ";
  cin >> x;
  cout << "The point A y co-ordinate is: ";
  cin >> y;
  The_distance = (x-x0)*(x-x0) +(y-y0)*(y-y0); 
  if (The_distance <= radium*radium)
 {
  cout << "The point is in the circle" << endl;
 }
  if (The_distance > radium*radium)
  cout << "The point is not in the circle" << endl;
  return 0;
}