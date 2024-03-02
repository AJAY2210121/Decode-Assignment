#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y3,y1,y2;
    cout<<"enter 1st point : ";
    cin>>x1>>y1;
     cout<<"enter 2nd point : ";
    cin>>x2>>y2;
     cout<<"enter 3rd point : ";
    cin>>x3>>y3;
    int m1=(y2-y1)/(x2-x1);
    int m3=(y3-y1)/(x3-x1);
    int m2=(y3-y2)/(x3-x2);
    cout<<"Slope : "<<m1<<"  "<<m2<<"  "<<m3<<endl;
    if (m1==m2==m3)
    {
      cout<<"Enter points are lies on straight line :";
      }
    else{
        cout<<"Enter points are not lies on straight line :";
    }

}