#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;
    
    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();    
    
    // if(str1.length()>str2.length()){
    //     if(str1.length()>str3.length()){
    //         max=str1.length();
    //     }
    // }

    int max_len = max(len1, max(len2, len3));
    int min_len = min(len1, min(len2, len3));

    cout << max_len - min_len ;


    return 0;
}