// Define a function to swap data of two int variables using call by reference
#include<iostream>
void swap(int &a,int &b);
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    cout<<"Before swaping "<<x<<" and "<<y<<endl;
    swap(x,y);
    cout<<"After swaping "<<x<<" and "<<y<<endl;
    return 0;
}
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
   // cout<<a<<" and "<<b<<endl;
}