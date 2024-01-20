#include<iostream>
using namespace std;

int fibb(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = fibb(n-2)+fibb(n-1);
    return ans;
}

int main(){
int n;
cin>>n;
cout<<fibb(n);
    return 0;
}