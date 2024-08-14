#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int count = 0;
    vector<int> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    bool isflg = true;
    while(isflg){
        for(int i =0;i<A.size();i++){
            if(A[i]%2 == 0){
                A[i] = A[i]/2;
            }else{
                isflg = false;
                break;
            }
        }
        if(isflg) count++;
        
    }
    cout << count << endl;
}