#include<iostream>
using namespace std;

bool isFound(int *arr,int size,int target){
    if(size==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    else{
        bool ans = isFound(arr+1,size-1,target);
        return ans;
    }
}

int main(){
    int arr[5]={3,5,1,2,6};
    int size = 5;
    int target = 3;
    cout<<isFound(arr,size,target)<<endl;

    return 0;
}