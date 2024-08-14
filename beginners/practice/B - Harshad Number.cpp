#include <bits/stdc++.h>
using namespace std;
int main(void){
   string N;
   cin >> N;
   int count = 0;
   for(int i =0;i<N.length();i++){
       count += int(N[i]-'0');
   }
   if(stoi(N)%count == 0) cout << "Yes" << endl;
   else cout << "No" << endl;
}
