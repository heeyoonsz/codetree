#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int arr_2d[2][4];

    int sum_garo = 0;
    int sum_sero = 0;
    int sum = 0;

    // 소수점 자리 고정 설정
    cout << fixed << setprecision(1);

// 전체 평균 구하기
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> arr_2d[i][j];
            sum += arr_2d[i][j];
            // 문법 틀림
            // sum_sero += arr_2d[i][];
            // sum_garo += arr_2d[][j];
        }
    }

// 가로 평균 구하기
    for(int i=0;i<2;i++){
        int row_sum = 0;
        for(int j=0;j<4;j++){
            // 한 행의 가로 모든 원소 더하기
            row_sum += arr_2d[i][j];
        }
        cout << (double)row_sum/4 << " ";
    }
    cout << "\n";

// 세로 평균 구하기
    for(int j=0;j<4;j++){
        int col_sum = 0;
        for(int i=0;i<2;i++){
            col_sum += arr_2d[i][j]; // 한 열의 세로 모든 원소 더하기
        }
        cout << (double)col_sum/2 << " ";
    }
    cout << "\n";

    cout << (double)sum/8 << "\n";


    return 0;
}