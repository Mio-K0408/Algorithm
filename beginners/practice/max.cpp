#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    list<int> numbers = {A,B,C,D};
    numbers.sort();
    /*
        リストを作ってソートし最後の要素にアクセス
    */
    cout << numbers.back() << endl;

    /*
        max関数を使い、要素の中で一番大きい値を取得
    */
    cout << max({A, B, C, D}) << endl;
    return 0;
}