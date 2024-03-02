#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    string ch=str;
    reverse(str.begin(),str.end());
    ch+=str;
    cout<<ch;
}