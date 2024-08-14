#include <bits/stdc++.h>
using namespace std;
int main(void){
   int N,K;
   cin >> N >> K;
   int count = 0;
   for(int i =0;i<N;i++){
       int x;
       cin >> x;
       int a = 2*x;
       int b = (K-x)*2;
       count += min(a,b);
   }
   cout << count << endl;
}
