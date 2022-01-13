#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun1(int n){
    return __builtin_popcount(n);
}

int fun2(int n){
    int c=0;
    while(n){
        c+=n&1;
        n>>=1;
    }
    return c;
}

int main(){
    
    int n=12354;
   // cout<<fun1(n);
    cout<<fun2(n);
    return 0;
}
