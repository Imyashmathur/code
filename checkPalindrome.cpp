#include<iostream>
using namespace std;

bool check(string str,int i,int j){
    if(i>j){
     return true;
    }
    if(str[i]!=str[j]){
        return false;
    }else{
 return  check(str,i+1,j-1);
    }
}

int main(){
string name = "naman";
bool isPalindrome = check(name,0,name.length()-1);
if(isPalindrome){
    cout<<"Its a Palindrome"<<endl;
}else{
    cout<<"Its not a Palindrome"<<endl;
}
return 0;
}