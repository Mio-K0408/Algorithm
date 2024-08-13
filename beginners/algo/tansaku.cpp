#include <bits/stdc++.h>
using namespace std;

/*
	input:level
	out:Yes
	input:algomethod
	out:No
*/
int main() {
  // データを受け取る
  string S;
  cin >> S;

  // S の長さを取得する
  int N = S.length(); 

  // 線形探索
  bool flag = true;
  for (int i=0; i<N; ++i) {
    if (S[i] != S[(N-1)-i]) {
      flag = false;
    }
  }
  
  // 答えを出力する
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}