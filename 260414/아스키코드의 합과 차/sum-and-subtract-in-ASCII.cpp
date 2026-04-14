#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    char str1, str2;

    cin >> str1 >> str2 ;

    int str1_int = (int)str1;
    int str2_int = (int)str2;

    int big = max(str1_int, str2_int);
int small = min(str1_int, str2_int);

    cout << (int)str1 + (int)str2 << " " << big - small ;
    
    return 0;
}