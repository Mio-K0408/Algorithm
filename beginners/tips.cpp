#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // main関数内に実行したい内容を記載
  cout << "Hello, world!" << endl;
  /*
    cout（しーあうと）：文字列の出力
    endl：改行
  */
  
  // -----------------------------------------
  int a = 10, b = 5;
  // 複数の変数を同時に宣言可能
  
  // -----------------------------------------
  
  /*
    変数aで入力を受け取る
    cin >> がキーワード
    入力値のデータ型によって、変数宣言時のデータを変える
  */
  int a;
  cin >> a;

  /*
    複数同時宣言、同時受け取りも可能
    ※ スペースか改行で区切られている前提
    input：2 3
          4
  */
  int a, b, c;
  cin >> a >> b >> c;

  /*
    動的に変わる個数の変数をベクターで受け取る
    input：3
          10 20 30
  */
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i]; // 入力を整数型動的配列 として受け取る
    }


  // -----------------------------------------
  /*
    文字列抽出
    どちらの方法でもいい。
    スライスで抜き出した各文字はchar型になるので注意
  */
  string S = "ABCDE";
  cout << S.substr(0,1) << endl;
  cout << S[0] << endl;

  // -----------------------------------------
  /*
    型変換（char → string）
    ラッパーぽい
    他にも方法たくさんあるのでおいおい。
  */
  char c = 'a';
  string str(1, c); // 長さ1のstringを作成し、cで初期化
  
  string S = "ABCDE";
  string N1(1, S[2]);
  cout << N1 << endl; //out:C

    // -----------------------------------------
    /*
      繰り返し
      配列でもベクターでも拡張for文の書き方は同じ
      ベクター：動的な配列。リストとはまた違う。
    */
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int sum = 0;
    for (auto n: nums) {
        sum += n;
    }
    int l[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int sum = 0;
    for (auto n: l) {
        sum += n;
    }
    cout << sum << endl;
    return 0;

}