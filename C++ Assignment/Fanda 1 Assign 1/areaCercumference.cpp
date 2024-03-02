#include<iostream>
using namespace std;
int main(){
    int r;
    float A,C;
    cout<<"Enter Radius : ";
    cin>>r;
    float pi = 3.14;
    A = pi*r*r;
    C = 2*pi*r;
    cout<<"Area : "<<A<<endl<<"Cercumfence : "<<C<<endl;
    if (A>C) cout<<"Area is greater than cercumference ";
    else    cout<< "Area is not greater than cercumference";
}