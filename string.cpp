#include <iostream>
#include <string.h>
using namespace std;

char getMax(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int num = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            num = ch - 'a';
        }
        else
        {
            num = ch - 'A';
        }
        arr[num]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char ch = 'a' + ans;
    return ch;
}
int main()
{
    string s;
    cin >> s;
    cout << getMax(s) << endl;
    return 0;
}