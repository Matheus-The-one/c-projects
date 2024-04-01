#include <iostream>
using namespace std;

void display(int var,double var1){
    cout<<"intiger number"<<var<< endl;
    cout<<"double number"<<var1<< endl;
   
}

void display(double var1){
    
    cout<<"double number"<<var1<< endl;
}
void display(int var){
    cout<<"intiger number"<<var<< endl;
    
}




int main(){
    int a=5;
    double b=5.5;;

    display(a,b);
    display(a);
    display(b);




}