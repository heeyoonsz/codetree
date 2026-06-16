#include <iostream>
using namespace std;

int main() {

    int n1, n2;
    cin >> n1 >> n2;

    //크기 100인 배열 미리 만들기
    int A[100];
    for(int i=0;i<n1;i++){
        cin >> A[i];
    }

    int B[100];
    for(int i=0;i<n2;i++){
        cin >> B[i];
    }

    //A배열 안에서 B가 시작될 수 있는 위치를 하나씩 검사..
    for(int i=0;i<=n1-n2;i++) {
        bool is_match = true; //일단 똑같다고 가정하고 시작

        // B의 길이만큼 한 칸씩 오른쪽으로 가며 대조
        for(int j=0;j<n2;j++){
            if(A[i+j] != B[j]) {
                is_match = false; //하나라도 다르면 실패
                break; // 안쪽 반복문 탈출
            }
        }

        // 중간에 깨지지 않고 끝까지 다 똑같았다면 정답 찾은것 ..
        if(is_match==true){
            cout << "Yes" << endl;
            return 0;
        }

    }
    cout << "No" << endl;

    return 0;
}