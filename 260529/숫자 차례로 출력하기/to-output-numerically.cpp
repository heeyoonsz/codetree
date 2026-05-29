#include <iostream>
using namespace std;

// 1부터 N까지
void recurv_first(int n){
    if(n==0){
        return;
    }
    recurv_first(n-1); //먼저 n-1까지의 출력 마치고 돌아온 다음에
    cout << n << " "; // 내 숫자 출력 ..

}

void recurv_second(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    recurv_second(n-1);
}


int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    recurv_first(n);
    cout << "\n";
    recurv_second(n);

    return 0;
}