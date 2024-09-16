#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int ans = 0;
    int before_val = 101;
    vector<int> d(N);
    for(int i=0;i<N;i++){
        cin >> d[i];
    }
    sort(d.rbegin(), d.rend());

    for(int i=0;i<N;i++){
        if(d[i] < before_val){
            ans +=1;
        }
        before_val = d[i];
    }
    cout << ans << endl;
}
