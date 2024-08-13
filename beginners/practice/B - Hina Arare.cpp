#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
    list<string> S = {};
    int count=0;
    for (int i=0; i<N; i++) {
        string ins;
        cin >> ins; 
        if(i == 0){
            S.push_back(ins);
            count++;
        }else{
            bool found = find(S.begin(), S.end(), ins) != S.end();
            if(!found){
                S.push_back(ins);
                count++;
            }
        }
    }
    // for(string tmp:S) cout << tmp << endl;
    if(S.size() == 3) cout << "Three" << endl;
    else cout << "Four" << endl;
    
}