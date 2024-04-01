#include <iostream>
using namespace std;

float absolute1(float var){
    if(var<0.0)
        var=-var;
    cout<<"executed form float"<<endl;
    return var;
}
int absolute(int var){
    if(var<0)
        var=-var;

    return var;
}





int main(){
    cout<< "float test for -5.5=="<< absolute1(5.5)<< endl;
    cout<<"int test for -5=="<< absolute(5)<<endl;
}