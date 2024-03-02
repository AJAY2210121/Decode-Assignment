#include<iostream>
#include<vector>
using namespace std;
float Circle(int x){
    float pi=22/7;
    float area = 2*pi*x*x;
    cout<<area;
    return area;
}
int main(){
    int radius;
    cout<<"Enter the radius :";
    cin>>radius;
    Circle(radius);
}