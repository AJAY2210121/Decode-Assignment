#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter row of  Matrix : ";
    cin>>m;
    cout<<"Enter column of  Matrix : ";
    cin>>n;
    int Matrix[m][n];
    cout<<"Enter  Matrix : ";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin>>Matrix[i][j];
        }
    }
    int Rsum=0,ans,sum=0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            Rsum+=Matrix[i][j];
        }
        if (Rsum>sum) {
            sum= Rsum;
            ans=i+1;
            Rsum=0;
        }
    }
    cout<<ans;
    
   
}
