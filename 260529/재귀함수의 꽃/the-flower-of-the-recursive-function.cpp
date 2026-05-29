#include <iostream>

using namespace std;

int N;

void recursive(int n){

    if(n==0){
        // recursive(n+1);
        return;
    }
    
    // 출력 순서에 따라 실행 흐름이 달라짐
    // N부터 1까지
    cout << n << " ";

    recursive(n-1);

    //1부터 N까지
    cout << n << " ";
}

int main() {
    cin >> N;

    // Please write your code here.
    recursive(N);
    return 0;
}