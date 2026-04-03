#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str[10];
    char target;
    for(int i=0;i<10;i++){
        cin >> str[i];
    }
    cin >> target;

    
    bool found = false; //일치하는게 있는지 확인용

    // str[i].back()을 쓰거나 str[i][str[i].length()-1] 사용하면 됨..
    for(int i=0;i<10;i++){
        if(str[i].back()==target){
            cout << str[i] << "\n";
            found = true;
        }
    }

    if(!found){
        cout << "None" <<"\n";
    }


    return 0;
}