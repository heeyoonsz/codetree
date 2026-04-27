#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string str, input;
    int count = 0;


    cin >> n >> str;
    for(int i=0;i<n;i++){
        cin >> input;
        if(str==input) {
            count++;
        }
    }

    cout << count;
    
    return 0;
}