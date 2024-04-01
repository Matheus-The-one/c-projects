#include <iostream>
using namespace std;



void myFunction(int x,int y) {
    int temp;
  temp=x;
  x=y;
  y=temp;
}

int main() {
  int a=100;
  int b=200;

  cout<<"before swap value of a:"<<a<<endl;
  cout<<"before swap value of b:"<<b<<endl;
  swap(a,b);
  cout<<a <<endl;
  cout<<b<<endl;
 return 0;
}
