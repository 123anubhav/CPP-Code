#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Return False if Nuber are distinct
    vector<int>v1;
    //v1= {1,1,1,3,3,4,3,2,4,2};
    v1={1,2,3,4};
    int n=v1.size();
    unordered_set <int>us1(v1.begin(),v1.end());
    int n1=us1.size();
    if(n>n1)
    cout<<"True --> Number are not distinct";
    else
    cout<<"False --> Numbera are distinct";
    
    
    return 0;
}
