#include <iostream>

using namespace std;

int N;

void return_lines(int N){
    for(int i=0;i<N;i++){
        cout << "12345^&*()_"<<endl;
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    return_lines(N);
    return 0;
}