// Write functions using function overloading to add two numbers having different data
// types
#include<iostream>
void add(int ,int );
void add(int ,float );
using namespace std;
int main(){
    int l,b,ba;
    float h;
    l=5,b=5;
    add(l,b);
    ba=10,h=5.12f;
    add(ba,h);
    return 0;
}
void add(int l,int b){
    float add1;
    add1 =l+b;
    cout<<"Add is "<<add1<<endl;
}
void add(int b,float h){
    float add1;
    add1=(b)+(h);
    cout<<"Add is "<<add1<<endl; 
}