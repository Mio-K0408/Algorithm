#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    string ans = "";
    /*
        後ろから変数に格納していき、3の倍数のときだけ","をいれる
        3の倍数が最後の値だった場合は","は入れないように注意。
        C++には3桁区切りの関数がない？
        N.size() ⇔ N.length()
    */
    for(int i=1;i<N.size()+1;i++){
        ans = N[N.size()-i] + ans;
        if(i%3==0 && i!=N.size()) ans = ',' + ans;
    }
    cout << ans << endl;
    return 0;
}