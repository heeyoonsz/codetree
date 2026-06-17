#include <iostream>
using namespace std;

int main() {
    // 최댓값 변수 하나 만든다음에 갱신해주어야한다 ..
    int n;
    cin >> n;

    int arr[1000];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // 탐색할 범위의 끝
    int end_index = n;

    // 첫 번째 원소(인덱스 0)가 최댓값으로 뽑힐때까지 계속..
    while(end_index >0){
        int max_val = arr[0]; // 최댓값 저장 변수
        int max_idx = 0; // 최댓값의 인덱스 저장 변수

        //0번 인덱스부터 이전 최댓값 인덱스 전까지 순회 ..
        for(int i=0; i < end_index ; i++){
            //가장 왼쪽에 있는 최댓값을 구해야하므로 ..
            // '>' 기호로 값이 엄격히 클 때만 갱신..
            if(arr[i] > max_val){
                max_val = arr[i];
                max_idx = i;
            }
        }

        // 인덱스 출력해줄 배열 따로 안만들어줘도됨..
        cout << max_idx +1 << " ";

        end_index = max_idx; //다시 돌아야되니까(or 끝났으니까) 다음 탐색 범위를 방금 찾은 최댓값 범위로 갱신 ..


    }
    cout << "\n";

    
    return 0;
}