#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<char>ch;
    ch.push_back('a');
    ch.push_back('e');
    ch.push_back('u');
    ch.push_back('i');
    ch.push_back('o');
    string str;
    cout<<"Enter String : ";
    cin>>str;
    int count=0;
    for (int i = 0; i < str.length(); i++){
        for (int j = 0; j < 5; j++) {
            if (str[i]==ch[j]){
                count++;
            }
            if (str[i])
            {
                /* code */
            }
            
            
        }
        
    }
    

}