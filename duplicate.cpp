#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
   // int arr[] = {3,4,5,6,7,7,5,668,35,6,656,775,567,57,43};
    int arr[] = {1,2,3,4,5,6,7,9,8,1,2,3,4,5,6,7,9};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v1(arr,arr+n);
    cout<<n<<"\n";
    
    int a=0;
    
    for(auto x:v1){
        cout<<x<<" ";
        a=a^x;
    }
    cout<<"\n"<<a;
    return 0;
}
