#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int arr_2d[n][n];
    int num=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // arr_2d[i][j] = 
            if(i%2==0){
            }
                arr_2d[i][j] = i + (j*n)+1;
        }
    }
/*
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44

*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // arr_2d[i][j] = 
            cout << arr_2d[i][j] << " ";
        }
        cout <<"\n";
        
    }




    return 0;
}