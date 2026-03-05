#include <iostream>

using namespace std;

int N;
void getResult(int n) {
    int result,sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    result = sum/10;
    cout << result;
}
int main() {
    cin >> N;
    getResult(N);
    // Please write your code here.

    return 0;
}