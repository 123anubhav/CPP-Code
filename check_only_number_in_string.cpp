#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string s){
  for(int i=0;i<s.length();i++){
    if(s.at(i)<'0'|| s.at(i)>'9')
    return false;
}  
return true; 
}


int main() {
    
string s="779870";

cout<<check(s);//?cout<<"Yes":cout<<"No";
 
    return 0;
}
