#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    
    string input;
    int num;
    // abcd 4
    cin >> input >> num;

    int request;
    for(int i=0;i<num;i++){
        cin >> request;
        // 왼쪽으로 밀기
        // abcd -> bcda
        if(request==1){
            input = input.substr(1)+input.substr(0,1);
        }
        // 오른쪽으로 밀기
        // cdab -> bcda
        else if(request==2){
            input = input.substr(input.length()-1,1)+input.substr(0,input.length()-1);
        }
        // requst가 3일때
        // 좌우 뒤집기
        // bcda -> adcb
        else {
            reverse(input.begin(),input.end());
        }
        cout << input << "\n";
    }

    
    return 0;
}