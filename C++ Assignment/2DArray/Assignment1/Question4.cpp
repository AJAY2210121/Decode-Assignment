#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (max<Matrix[i][j])  {
                max=Matrix[i][j];
            }  
        }
    }
    cout<<max;
}