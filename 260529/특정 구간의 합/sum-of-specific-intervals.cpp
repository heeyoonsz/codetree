#include <iostream>

using namespace std;

int n, m;
int arr[100];

int getSum(int start, int end){
    int sum = 0;
    // start인덱스부터 end인덱스까지 돌면서 sum에 arr[i] 더하기
    for(int i=start;i<=end;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        // a1과 a2를 인덱스에 맞게 1씩 빼주기
        a1--;
        a2--;

        // getSum함수에 값 넘겨서 호출하고, cout으로 출력
        cout << getSum(a1,a2)<<"\n";
    }

    return 0;
}