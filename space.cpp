#include <iostream>
#include <string.h>
using namespace std;

void removeSpace(string s){
for(int i = 0;i<s.length();i++){
    if(s[i]==' '){
        s[i]="@40";
    }
}
}


int main(){
string s = "my name is khan";
cout << removeSpace(s);
return 0;
}