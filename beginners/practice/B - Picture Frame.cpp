#include <bits/stdc++.h>
using namespace std;
int main(void){
    int H,W;
    cin >> H >> W;
    string tmp = string(W+2, '#') ;
    vector<string> ans(H+2,tmp);
    for(int i=0;i<H;i++){
        string a;
        cin >> a;
        string current = ans[i+1];
        ans[i+1] = current.replace(1,W,a);
    }
    for(string s:ans) cout << s << endl;
    
}
