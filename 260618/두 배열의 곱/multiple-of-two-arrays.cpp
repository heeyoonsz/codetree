#include <iostream>
using namespace std;

int main() {
    
    int first_arr[3][3];
    int second_arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> first_arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> second_arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << first_arr[i][j] * second_arr[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}