#include<iostream>
using namespace std;
int main(){
    int m, n, p, q;
    cout<<"Enter row of 1st Matrix : ";
    cin>>m;
    cout<<"Enter column of 1st Matrix : ";
    cin>>n;
    cout<<"Enter row of 2nd Matrix : ";
    cin>>p;
    cout<<"Enter column of 2nd Matrix : ";
    cin>>q;
    if (m==p && n==q){ 
        int arr[m][n], brr[p][q], crr[m][n];
        cout<<"Enter 1st Matrix : ";
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cin>>arr[i][j];
            }
        }
        cout<<"Enter 2nd Matrix : ";
        for (int i = 0; i < p; i++){
            for (int j = 0; j < q; j++){
                cin>>brr[i][j];
            }
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < q; j++){
               crr[i][j]= arr[i][j] + brr[i][j];
            }
            cout<<endl;
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < q; j++){
                cout<<crr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else cout<<"Addition is not possible.";
    
   
}