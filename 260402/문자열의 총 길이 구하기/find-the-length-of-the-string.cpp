#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string group[10];
    int cnt=0;
    for(int i=0;i<10;i++){
        cin >> group[i];
    }

    for(int i=0;i<10;i++){
        cnt+=group[i].length();
    }
    cout << cnt;
    
    return 0;
}