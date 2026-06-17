#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }


int profit = 0;
int current_profit = 0;
    // price가 내림차순이면 무조건 손해라서 0
    // 해당인덱스일때 순회, 해당 인덱스보다

/*
9 7 5 3 1
    0 1 2 3 4
    9 10 2 3 6
i   
j
*/
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // cout << "price[i] = " << price[i] <<endl;
            // cout << "price[j] = " << price[j] <<endl;
            // 파는 가격 > 사는 가격 일때 ..
            if(price[j]>price[i]){
                current_profit = price[j]-price[i];
                if(current_profit>profit){
                    profit = current_profit;
            }

            }
            // 내림차순이면 이득 없음
            // if(price[i]>price[j]){
            //     profit = 0;
            // }
        }
    }
    
    cout << profit;


    return 0;
}
