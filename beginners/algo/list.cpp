#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; // in:5
    string S;
    cin >> S; // in:abcba
    // int count = 0;
    // for(int i=0;i<N;i++){
    //     if(S[i] == 'a') count++;
    // }
    // cout << count << endl;
    /*
        ループで回さずに関数を使用する
        input:開始位置、終了位置、条件
    */
    cout << count(S.begin(), S.end(), 'a') << endl; // out:2
    return 0;
}