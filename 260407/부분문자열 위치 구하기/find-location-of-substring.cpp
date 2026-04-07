#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    string target;

    cin >> input >> target ;

    for(int i=0;i<=input.length()-target.length();i++){ // 윈도우 시작점 이동
        bool match = true;
        for(int j=0;j<target.length();j++){ // 한 글자씩 비교
            if(input[i+j]!=target[j]){ // 한 글자라도 다르면?
                match = false;
                // cout << -1 ;
                break; // 다르면 이 위치 포기하고 다음 i로
            }
        }

        if(match){
            cout << i;
            return 0;
        }

    }

    cout << -1 << "\n";

    return 0;
}