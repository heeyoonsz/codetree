#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    string word1, word2;
    cin >> word1 >> word2;
    
    int leng1= word1.length();
    int leng2= word2.length();
    if(leng1>leng2) {
        cout << word1 << " " << leng1 << endl;
    }
    else if (leng1 < leng2) {
        cout << word2 << " " << leng2 << endl;
    }
    else {
        cout << "same" << endl;
    }
    // cout << max(word1.length(), word2.length());
    return 0;
}