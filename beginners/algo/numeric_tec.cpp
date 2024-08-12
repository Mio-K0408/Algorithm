#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> A(N);
    for (int i=0; i<N; i++) {
	  cin >> A[i];
	}
    // 1の位だけを出力する（Aの桁数は1~4桁でランダム）
    for(string ans:A){
        cout << ans[ans.length()-1] << endl;
    }
    for (int item: A) {
        cout << item%10 << endl; 
    } 
    
    return 0;
}