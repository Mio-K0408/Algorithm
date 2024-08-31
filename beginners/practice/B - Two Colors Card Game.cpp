#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<string> S(N);
    map<string,long long> count;
    for(int i=0;i<N;i++){
        cin >> S[i];
        count[S[i]]++;
    }
    int M;
    cin >> M;
    vector<string> T(M);
    for(int i=0;i<M;i++){
        cin >> T[i];
        count[T[i]]--;
    }
    long long ans = 0;
    for (auto [k, v] : count){
        ans = max(ans, v);
    }
    cout << ans << endl;
}