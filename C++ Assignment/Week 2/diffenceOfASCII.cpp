#include <iostream>
using namespace std;
int main(){
    char x,y;
    cout<<"enter first caracter : "<<x<<endl;
    cin>>x;
    cout<<"enter second caracter : "<<y<<endl;
    cin>>y;
    int z=(int)y-(int)x;
    cout<<"difference of ASCII : "<<z<<endl;
    cout<<"caracter is : "<<(char)z;
}