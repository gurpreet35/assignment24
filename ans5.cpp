// Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, t1, flag1 = 0;
    cout<<"Emter the value of t1:"<<endl;
    cin>>t1;
    for (int i = 0; i < t1; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (t1 == a)
        {
            flag1 = 1;
            break;
        }
    }
    if (flag1 == 1)
    {
        cout<<t1<<" is the terms of fibonnaci series";
    }
    else
    {
        cout<<t1<<" is not the terms of fibonnaci series";
    }
    return 0;
}