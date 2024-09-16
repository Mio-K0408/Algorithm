#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int ans = 0;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());
    for(int i=0;i<N;i++){
        if(i == 0){
            ans += A[i];
        }else if(i %2 ==1){
            ans -= A[i];
        }else{
            ans += A[i];
        }
    }
    cout << ans << endl;
}
