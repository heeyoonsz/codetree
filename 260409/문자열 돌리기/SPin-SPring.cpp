#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string alpha;
    cin >> alpha;

    // string result="";

    cout << alpha << "\n";

    for(int i=0;i<alpha.length();i++){
        alpha = alpha.substr(alpha.length()-1) + alpha.substr(0,alpha.length()-1);
        cout << alpha << "\n";
    }

    
    return 0;
}