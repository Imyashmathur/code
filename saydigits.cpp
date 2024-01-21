#include<iostream>
using namespace std;

void separation(int n,string arr[]){
if(n==0){
    return;
}

int digit = n%10;
n=n/10;
separation(n,arr); 
cout<<arr[digit]<<" ";

}

int main(){
    string arr[10] = {"Zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    separation(n,arr);
    
return 0;
}