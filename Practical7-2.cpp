#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T> class StackI{

public:
 virtual void push(T k) = 0;
 virtual void pop() = 0;
 virtual T top() =0;
 virtual bool isEmpty() =0;
 virtual void print()=0;
};

template <typename T> 

class Stack:StackI<T>{

protected:
int index; 
int number; 
int size; 
int s[100];
 
public:

 Stack(int n){
 s [n];
 index=0;
 number=0;
 size=n;
 }

 void push(T k){
 if (number>=0 && number<size){
 s [index++] = k;
 number++;
 }
 }

 void pop(){
 if (number>0){
  --index;
  --number;
 }
 }

T top(){
if (number>0){
return s [index];
}
else
return s [0];
 }

void print(){
 cout << "−−−−−−---−--−----−−−" << endl;
if (number==0){
std :: cout << "       EMPTY" << endl;
}
else{
for(int i=index-1;i>=0;i--){
if ( i==index-1)
 cout << " Topnumber −>\t";
 else
 cout << "\t\t\t\t" ;
 cout << s[i] << endl;
 }
 }
 cout <<"−−−−−−---−---−−−---−" << endl << endl;

 }

 bool isEmpty(){
 return (number==0)? true : false;
 }
};

int main(int argc, const char *argv []) {

Stack<int> s = Stack<int>(4);

s .push(1);
s .push(9);
s .push(8);
s .push(3);
s . print ();
s .pop();
s . print ();
s .pop();
s . print ();
s .pop();
s . print ();
s .pop();
s . print ();
return 0;
}

