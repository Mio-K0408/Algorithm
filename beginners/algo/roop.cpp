#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    /*
        初回ループで0の掛け算を回避しようとしたパターン
        無駄な分岐がある
    */
    int sum = 0;
    int count = 0;
    for(int tmp:A){
        if(count == 0){
            sum = tmp;
        }else{
            sum = sum * tmp;
        }
        count++;  
    }

    /*
        合計値を格納する変数に1を代入することで0に掛け算するのを回避するパターン
        ※ 「*=」使える！
    */
    int ans = 1; 
    for (int item: A) { 
        ans *= item; 
    }

    cout << ans << endl;
    return 0;
}