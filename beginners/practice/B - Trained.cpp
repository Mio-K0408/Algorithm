#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    int count = 1;
    int index = 0;
    for(int i=0;i<N;i++){
        int current = A[index];
        if(current == 2){
            cout << count << endl;
            return 0;
        }
        count+=1;
        index= current-1;
    }
    cout << -1 << endl;
}
