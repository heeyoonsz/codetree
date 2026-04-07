#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    int cnt = 0;
    
    // 두 글자가 동시에 맞을때만 1을 올려야 함
    // b 길이가 2니까 마지막글자 바로 전까지만 검사 ..
    for(int i=0;i<a.length()-1;i++){
        // i번째가 b[0]이고 동시에 i+1번째가 b[1]인지?
        // for(int j=0;j<2;j++){
            // if(a[i+j]==b[j]){
            if(a[i]==b[0]&&a[i+1]==b[1]){
                cnt++; // 두 글자가 모두 맞을때만 올리기 ..
            }
        // }
    }

    cout << cnt;
    return 0;
}