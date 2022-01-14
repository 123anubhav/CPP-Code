#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="ABCDEFGH";
    cout<<"Before Reverse = "<<s1;
    
    int n=s1.length();
    for(int i=0;i<n/2;i++){
        swap(s1[i],s1[n-i-1]);
    }
    cout<<"\nAfter Reverse = "<<s1;
    
    return 0;
}
