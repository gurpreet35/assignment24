// define a function to find the highest value digit in a given number.
#include<iostream>
#include<cmath>
void high(int n);
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    high(n);
    return 0;
}
void high(int n){
    int num,r,temp,count=0;
while(n!=0){
    r=n%10;
    if(r>count){
        count=r;
    }
    n=n/10;
}
    cout<<"Highest number is "<<count;
    }