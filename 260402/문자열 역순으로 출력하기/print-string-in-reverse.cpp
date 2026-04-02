#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string alpha[4];

    for(int i=0;i<4;i++){
        cin >> alpha[i];
    }

    for(int i=3;i>=0;i--){
        cout << alpha[i] << "\n";
    }


    return 0;
}