#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout <<" Enter the quadinate : ";
    cin>>x>>y>>z;
    if (x!=0 && y!=0 && z!=0 ){
       cout<<"This lies between the Quadinate: ";
    }
     else if (x!=0 && y!=0 && z==0 ){
       cout<<"This lies X-Y plane : ";
    }
     else if (x==0 && y!=0 && z!=0 ){
       cout<<"This lies X-Y plane : ";
    }
     else if (x!=0 && y==0 && z!=0 ){
       cout<<"This lies X-Z plane : " ;
    }
     else if (x!=0 && y==0 && z==0 ){
       cout<<"This lies X-axis : ";
    }
     else if (x==0 && y!=0 && z==0 ){
       cout<<"This lies Y-axis : ";
    }
     else {
       cout<<"This lies Z-axis : ";
    }

}