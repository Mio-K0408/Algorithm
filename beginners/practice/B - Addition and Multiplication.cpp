#include <bits/stdc++.h>
using namespace std;
int main(void){
   int N,K;
   cin >> N >> K;
   int current_num = 1;
   for(int i =0;i<N;i++){
       if(2*current_num >= current_num+K) current_num = current_num+K;
       else current_num = 2*current_num;
   }
   cout << current_num << endl;
}
