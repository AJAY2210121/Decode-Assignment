#include<iostream>
using namespace std;
int main(){
    int R,H ;
    float A,V;
    cout<<"Radius of cylinder : ";
    cin>>R;
    cout<<"Height of cylinder : ";
    cin>>H;
    float pi=3.14;
    V=pi*R*R*H;
    A=(float)2*pi*R*(R+H);
    cout<<"Volume of cylinder : "<<V<<endl;
    cout<<"Area of cylinder : "<<A;
}