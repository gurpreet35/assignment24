//  Define a function to check whether a given number is a Prime number or not
#include<iostream>
void check_prime(int n);
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    check_prime(n);
    return 0;
}
void check_prime(int n){
    int i,flag=0;
    for ( i = 2; i <=n/2; i++)
    {
        if(n%i==0){
            flag=1;
        }
    }
    if(flag!=1){
        cout<<n<<" is prime number";
    }
    else{
        cout<<n<<" is not prime number";
    }
    
}