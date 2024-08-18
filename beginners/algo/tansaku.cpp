#include <bits/stdc++.h>
using namespace std;

/*
	input:level
	out:Yes
	input:algomethod
	out:No
*/
int main() {
  // -----------------------------------------
  /*
    探索1
  */
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

  // -----------------------------------------
  /*
    探索2
  */
  // データを受け取る
  int N;
  cin >> N; 
  vector<int> A(N); 
  for (int i=0; i<N; ++i) cin >> A[i];

  // 線形探索
  vector<int> count(9);  
  for (int i=0; i<N; ++i) {   
    count[A[i]-1]++;
  }
  
  // 答えを出力する
  for (int i=0; i<9; ++i) {
    cout << count[i] << endl;
  }
}