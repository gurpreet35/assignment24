// Write a function using the default argument that is able to add 2 or 3 numbers
#include<iostream>
void add(int x,int y,int=0);
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    add(x,y);
    add(x,y,10);
    return 0;
}
void add(int x,int y,int z){
   int sum;
   sum=x+y+z;
   cout<<"sum of "<< x<<"+"<< y<<"+"<< z<<" is " <<sum<<endl;

}