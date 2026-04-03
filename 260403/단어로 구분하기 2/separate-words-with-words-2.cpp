#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    
    string str;

    for(int i=0;i<10;i++){
        cin >> str;
        if(i%2==0) {
            cout << str << "\n";
        }
    }
    
    return 0;
}