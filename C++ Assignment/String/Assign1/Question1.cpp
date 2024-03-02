#include<iostream>
#include<string>
using namespace std;
int main(){
    string ch;
    cout<<"Enter string : ";
    getline(cin,ch);
    int i=0;
    for(int i=0; ch[i]!='\0';i=i+2){
        ch[i]= '#';
    }
   cout<<ch;
}