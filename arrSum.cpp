#include<iostream>
using namespace std;

int sum(int arr[],int size){
    
    // if(size!=0){
    //     return arr[size-1]+sum(arr,size-1);
    // }
    // return 0;
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0]+sum(arr+1,size-1);
}

int main(){
int arr[5] = {2,3,6,1,9};
int size = 5;
int ans = sum(arr,size);
cout<<ans<<endl;
    return 0;
}