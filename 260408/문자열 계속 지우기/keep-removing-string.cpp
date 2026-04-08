#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;

    // for(int i=0;i<a.length();i++){
    //     if
    // }
    while(a.find(b)!=string::npos){
        int pos = a.find(b);
        a.erase(pos, b.size()); // pos부터 b 길이만큼만 삭제
    }
    
    cout << a << "\n";
    
    return 0;
}