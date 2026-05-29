#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int getSubstringIndex(const string &text, const string &target){
    // text안에서 target 찾기
    int index = text.find(target);

    // 만약 못찾으면 string::npos값 나옴
    if(index == string::npos){
        return -1;
    }
    return index;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << getSubstringIndex(text, pattern) << "\n";
    return 0;
}