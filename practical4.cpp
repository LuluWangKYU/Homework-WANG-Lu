#include <iostream>
using namespace std;
#include <math.h>

//read coefficient from keyboard
double * read_poly(int &n){
  cout<< "max degree: ";
  cin>> n;
  double *c = new double [n+1];
  for (int i=0; i<=n ; i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

//print polynoiml
void print_poly(double *c, int n){
  int i;
  cout <<"the polynomial is : "<< c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

//calculte a real number x in a polynomial

double calculate_poly( double x, double *c, int n) 
{ 
  cout<<"the value of x is :";
  cin>> x;
  double result = 0;
  for(int i=0; i<=n; i++)
  {
    result = result + c[i] * pow(x,i);
  }
  cout <<"the value of the polynomial is :" << result <<endl;
}


// the sum of two polynomials
double * poly_sum(double *p1, int d1, double *p2, int d2, int &dr)
{
  dr = d1 > d2 ? d1 : d2;

  double *r = new double[dr];

  for(int i = 0; i <= dr; i++)
  {
    double tmp1, tmp2;
    if(i > d1)
    {
      tmp1 = 0;
    }
    else
    {
      tmp1 = p1[i];
    }

    if(i > d2)
    {
      tmp2 = 0;
    }
    else
    {
      tmp2 = p2[i];
    }
    r[i] = tmp1 + tmp2;
  }

  return r;
}

double *poly_pro(double *p1, int d1, double *p2, int d2, int &dr)
{
  
  int max_dim = 0;
  if (d1 == 0)
  {
    max_dim = d2;
  }
  else if(d2 == 0)
  {
    max_dim = d1;
  }
  else
  {
    max_dim = d1*d2;
  }
  dr = max_dim;

  
  double *r = new double[max_dim+1];

  for(int i = 0; i <= d2; i++)
  {
    for(int j = 0; j <= d1; j++)
    {
      r[i+j] += p2[i] * p1[j];
    }
  }

  // find max dimension
  for(int i = max_dim; i > 0; i--)
  {
    if(r[i] != 0.0)
    {
      dr = i;
      break;
    }
  }
  return r;
}
 

int main()
{
  double *p1,*p2,*pro,*polysum;
  int d1, d2;

  int d;
  int dr;
  
  double x;

  p1=read_poly(d1);
  print_poly(p1,d1);

  calculate_poly(x,p1,d1);

  p2=read_poly(d2);
  print_poly(p2,d2);
  
  poly_sum(p1,d1,p2,d2,dr);
  cout << "The sum of ploynomials is: " <<endl;
  polysum = poly_sum(p1, d1, p2, d2, dr);
  print_poly(polysum, dr);

  poly_pro(p1,d1,p2,d2,dr);
  cout << "The prodcut of ploynomials is: " <<endl;
  pro = poly_pro(p1, d1, p2, d2, dr);
  print_poly(pro, dr);


  delete[] p1;
  delete [] p2;
  
  return 0;
}

