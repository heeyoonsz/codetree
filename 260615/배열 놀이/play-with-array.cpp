#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,q;
    cin >> n >> q;
    
    int arr_n[100];
    // int arr_q[q];

    for(int i=0;i<n;i++){
        cin >> arr_n[i];
    }

    for(int i=0;i<q;i++){
        int type;
        cin >> type; // 질의 먼저 받기 (1 or 2 or 3)
        // cin >> arr_q[i];

        if(type==1){
            int a;
            cin >> a; // 뒤에 오는 숫자 a 추가로 입력받음
            cout << arr_n[a-1] << "\n";
        }
        else if(type==2){
            int b;
            cin >> b;

            int found = 0;
            for(int i=0;i<n;i++){
                if(arr_n[i]==b){
                    found = i + 1;
                    break;
                }
            }
            cout << found << "\n";
        }
        else if(type==3){
            int s, e;
            cin >> s >> e;
            for(int i=s-1;i<=e-1;i++){
                cout << arr_n[i] << " ";
            }
            cout << "\n";
        }

    }

    return 0;
}