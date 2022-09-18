// Define a function to calculate x raised to the power y
#include<iostream>
#include<cmath>
void calculate(int x,int y);
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of base value:";
    cin>>x;
    cout<<"Enter the value of raising power:";
    cin>>y;
    calculate(x,y);
    return 0;
}
void calculate(int x,int y){
    int r;
    r=pow(x,y);
    cout<<r<<" is the value of"<< x<<" raised to power"<< y;
}