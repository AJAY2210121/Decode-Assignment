#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
// void Sreverse(string &str, int i ,int n){ 
//     if(n<i) return;
//     int j=0;
//     swap(&str[i], &str[n-j]);
//     j++;
//     Sreverse(str, n,i+1);
// }
int main(){
    string str;
    cout<<"Enter String : ";
    cin>>str;
    int n=str.length();
    int i=n/2;
    reverse(str.begin()+(n/2), str.end());
    cout<<str;
}