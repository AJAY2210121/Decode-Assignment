#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter 1st string : ";
    getline(cin, str);
    string ch;
    cout<<"Enter 2nd string : ";
    getline(cin, ch);
    sort(str.begin(), str.end());
    sort(ch.begin(), ch.end());
    if(str==ch) cout<<"True";
    else cout<<"False";
}