#include <iostream>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
    }

    // Please write your code here.

    int capacity = 2; 
    int current_size = 0;
    int* arr = new int [capacity]; // 실제 정수들 저장할 동적 배열 포인터

    for(int i=0;i<N;i++){
        if(command[i] == "push_back"){
            // 방이 꽉 찼으면 2배로 늘린다
            if(current_size == capacity){    
                capacity *= 2; // 용량 2배로 증가
                int* new_arr = new int[capacity]; // 2배 더 큰 새 배열 할당
            
                // 기존 데이터를 새 배열로 복사
                for(int j=0;j<current_size;j++){
                    new_arr[j] = arr[j];
                }

                delete[] arr; // 낡은 배열 메모리 해제
                arr = new_arr; // 포인터를 새 배열 주소로 변경
            }
            // 맨 뒤 공간에 값 넣고 크기 1 늘리기
            arr[current_size] = num[i];
            current_size++;
        }
        else if(command[i] == "pop_back"){
            if(current_size>0){
                current_size--;
            }
        }
        else if(command[i] == "size"){
            cout << current_size << "\n";
        }
        else if(command[i] =="get"){
            // num[i]에 저장된 k번째 숫자를 출력한다(인덱스는 k-1)
            int k = num[i];
            cout << arr[k-1] << "\n";
        }
    }

    delete[] arr;

    return 0;
}
