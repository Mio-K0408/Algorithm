#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,A;
    cin >> N >> A;
    int num = N % 500;
    if(num <= A){
        cout <<  "Yes" << endl;
    }else{
        cout <<  "No" << endl;
    }
}
