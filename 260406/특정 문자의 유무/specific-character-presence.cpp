#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    bool ee_exist = false;
    bool ab_exist = false;

    // (i+1) 때문에 length()-1 까지만 돌기
    for(int i=0;i<str.length()-1;i++){
        if(str[i]=='a'&&str[i+1]=='b'){
            // cout << "Yes ";
            ab_exist = true;
        }
        
        // else {cout << "No ";}

        if(str[i]=='e'&&str[i+1]=='e'){
            // cout << "Yes ";
            ee_exist = true;
        }
        // else {cout << "No ";}
    }

    if(ee_exist) cout << "Yes ";
    else cout << "No ";

    if(ab_exist) cout << "Yes ";
    else cout << "No ";



    return 0;
}