#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    cin >> a >> b;
    
    string not_alpha_a = "";
    string not_alpha_b = "";

    for(int i=0;i<a.length();i++){
        if(!isalpha(a[i])){
            not_alpha_a+=a[i];
        }
    }

    for(int i=0;i<b.length();i++){
        if(!isalpha(b[i])){
            not_alpha_b+=b[i];
        }
    }


    cout << stoi(not_alpha_a) + stoi(not_alpha_b);


    return 0;
}