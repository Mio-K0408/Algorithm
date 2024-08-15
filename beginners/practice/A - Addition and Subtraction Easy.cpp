#include <bits/stdc++.h>
using namespace std;
int main(void){
    string A,OP,B;
    cin >> A >> OP >> B;
    int ans = 0;
    if(OP == "+") ans = stoi(A) + stoi(B);
    else ans = stoi(A) - stoi(B);
    cout << ans << endl;
}