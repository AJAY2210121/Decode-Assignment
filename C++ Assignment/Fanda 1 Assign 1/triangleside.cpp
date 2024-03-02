#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    int side;
    cout<<"enter sides of triangle : ";
    cin>>x>>y>>z;
    if ( x==y&&y==z){
        cout<<"This is a equilateral triangle";
    }
    else  if (x==y || y==z || x==z ){
        cout<<"This is a isosceles triangle";  
    }
    else
    {
          cout<<"This is a scalene triangle";
    }
    
    

}