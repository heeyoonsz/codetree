#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 0;
    int cnt_a = 0;
    string str;

    for(int i=0;i<n;i++){
        cin >> str;

        cnt +=str.length();
        if(str[0]=='a')
            cnt_a++;
    }

    cout << cnt << " " << cnt_a;

    return 0;
}