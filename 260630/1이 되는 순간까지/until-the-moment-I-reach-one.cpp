#include <iostream>
using namespace std;

int even_sum(int n){
    // 1이 되면 0리턴하면서 중지
    if(n==1){
        return 0;
    }

    if(n%2==0){
        // 짝수면 1번 나눴으니까 +1해주고 n/2재귀호출
        return 1 + even_sum(n/2);
    }
    else{
        // 홀수면 +1해주고 n/3 재귀호출
        return 1 + even_sum(n/3);
    }

}

int main() {
    
    int n;
    cin >> n;
    cout << even_sum(n) << "\n";

    
    return 0;
}