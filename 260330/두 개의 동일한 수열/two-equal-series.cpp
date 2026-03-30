#include <iostream>
#include <algorithm>
using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Please write your code here.

    sort(A,A+n);
    sort(B,B+n);

    for(int i=0;i<n;i++){
        if(A[i]!=B[i]){
            cout << "No";
            return 0; //하나라도 아니면 No 출력 후 즉시 종료
        }
    }

    cout << "Yes"; // 반복문에서 종료되지 않았으면 모두 같은것 ..

    return 0;
}