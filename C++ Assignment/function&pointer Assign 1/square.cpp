 #include<iostream>
 using namespace std;
void square(int n){
    int i,j;
    for (int i = 1; i < n+1; i++){
        for(int j=i; j<=i; j++){
            j*=j;
            cout<<j<<" ";
        } 
    } 
 }
 int main(){
    int n;
    cout<<"Enter number to find the Square  :";
    cin>>n;
    square(n);
 }