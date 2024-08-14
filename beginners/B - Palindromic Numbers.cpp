#include <bits/stdc++.h>
using namespace std;
int main(void){
   int A,B;
   cin >> A >> B;
   int count = 0;
   for(int i =A;i<=B;i++){
       string tmp = to_string(i);
       if(tmp[0] == tmp[4] && tmp[1] == tmp[3]) count++;
   }
   cout << count << endl;
}
