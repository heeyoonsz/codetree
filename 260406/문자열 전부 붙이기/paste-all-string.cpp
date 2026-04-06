#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string rslt="";
    string str;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        rslt+=str;
    }
    cout << rslt;
    
    return 0;
}