#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int nums;
    vector<int>res;
    string str;
    cout<<"Enter String : ";
    cin>>str;
    nums=stoi(str);
    for (int i = 0; i < str.size(); i++){
        int digit=nums%10;
        res.push_back(digit);
        nums/=10;
    }
    sort(res.begin(),res.end());
    for (int i = str.size()-2; i >=0 ; i++){
        if(res[i]!=res[i+1]){
            cout<<res[i];
            break;
        }
    }
    
}