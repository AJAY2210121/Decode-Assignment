#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    string ch=str;
    reverse (str.begin(), str.end());
    if(str==ch) cout<<"Yes";
    else cout<<"Not";

}