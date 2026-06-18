#include <iostream>
using namespace std;

int main() {
    
    // 행 N , 열 M
    
    int n, m;
    cin >> n >> m;
    
    int first_2d[n][m];
    int second_2d[n][m];
    int ans_2d[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> first_2d[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> second_2d[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(first_2d[i][j]==second_2d[i][j]){
                ans_2d[i][j]=0;
            }
            else {
                ans_2d[i][j]=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << ans_2d[i][j] << " ";
        }
        cout <<"\n";
    }

    
    return 0;
}