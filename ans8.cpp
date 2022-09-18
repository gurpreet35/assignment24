// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
#include<iostream>
void area1(int r);
void area1(int length,int breadth);
void area1(int base ,float height);
using namespace std;
int main(){
    int r,l,b,ba;
    float h;
    r=5;
    area1(r);
    l=5,b=5;
    area1(l,b);
    ba=10,h=5.12f;
    area1(ba,h);
    return 0;
}
void area1(int r){
    float area;
    area=3.14*(r)*(r);
    cout<<"Area of the circle is "<<area<<endl;
}
void area1(int length,int breadth){
    float area;
    area =length*breadth;
    cout<<"Area of rectangle is "<<area<<endl;
}
void area1(int base,float height){
    float area;
    area=0.5*(base)*(height);
    cout<<"Area of the triangle is "<<area<<endl; 
}