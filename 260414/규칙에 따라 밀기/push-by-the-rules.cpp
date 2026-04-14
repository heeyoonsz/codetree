#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input, order;
    cin >> input >> order;

    for(int i=0;i<order.length();i++){
        if(order[i]=='L'){
            // 왼쪽으로 밀기
            // codtree -> odetreec
            input = input.substr(1)+input.substr(0,1);
        }

        else if(order[i]=='R'){
            // 오른쪽으로 밀기
            // odetreec -> codetree
            input = input.substr(input.length()-1,1)+input.substr(0,input.length()-1);
        }
    }
        // 최종 결과 출력
        cout << input << "\n";

    return 0;
}