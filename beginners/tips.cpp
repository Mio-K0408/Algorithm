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

    /*
		  文字列の受け取り
    */
    string s;
    getline(cin, s); // in:I have a pen.
    cout << "一行目 " << s << endl; //out:一行目 I have a pen.

    /*
      受け取り文字の有無でループ判定
      受け取る文字がある間はずっとループを回す。
      型宣言しているのでそれにマッチする値だけを取れる。
      ※ Pythonはできない気がする
      in:a3x1c10
      out:aaaxcccccccccc
    */
    char c;
    while (cin >> c) {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            cout << c;
        }
    }    

  // -----------------------------------------
  /*
    最大・最小値
  */
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  list<int> numbers = {A,B,C,D};
  numbers.sort();
  /*
    リストを作ってソートし最後の要素にアクセス
  */
  cout << numbers.back() << endl;

  /*
    max関数を使い、要素の中で一番大きい値を取得
  */
  cout << max({A, B, C, D}) << endl;
  
  /*
    リスト、配列、vectorから最大値/最小値を取得
  */
  int min = *min_element(begin(x), end(x));
  int max = *max_element(begin(x), end(x));

  // -----------------------------------------
  /*
    文字列抽出
    どちらの方法でもいい。
    スライスで抜き出した各文字はchar型になるので注意
  */
  string S = "ABCDE";
  cout << S.substr(0,1) << endl;
  cout << S[0] << endl;
  cout << S.at(0) << endl;

  // -----------------------------------------
  /*
    文字列探索
    あれば0、なければ-1（string::npos）を返す
  */
  int isflg4 = tmp.find("4");
  if(isflg4 == string::npos) cout << "条件に一致するデータなし" << endl;

  // -----------------------------------------

  /*
    文字数取得
  */
  string str = "Hello";
  cout << str.size() << endl; // 5
  cout << "Hello"s.size() << endl; // 5（sを末尾につける）
  cout << "Hello".size() << endl; // できない

  // -----------------------------------------

  /*
    文字種判定      
  */
  int N;
  string S;
  cin >> N >> S;
  for(int i=0;i<N;i++){
      if(isupper(S[i])) cout << "uppercase" << endl; // 大文字
      else if(islower(S[i])) cout << "lowercase" << endl; // 小文字
      else if(isdigit(S[i])) cout << "digit" << endl; // 数値
      else cout << S[i] << endl;
  }

  // -----------------------------------------

  /*
    0埋め      
  */
  long N;
  cin >> N;
  /*
    %:変換指定する合図、printfでは必須
  */
  printf("%010lld\n", N);
  /*
    setw:10桁にしたい
    setfill:何で埋めるか
  */
  cout << setw(10) << setfill('0') << N << endl;
  // -----------------------------------------
  /*
    大文字 ⇔ 小文字（char）
    ASCIIコード上で`32`を増減させれば良い
  */
  if(islower(C)) {
      low=C;
      up = C - 32; // 小文字→大文字
  }else{
      up = C;
      low = C + 32; // 大文字→小文字
  }
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
    型変換（char → int）
  */
  string N;
  cin >> N;
  int count = 0;
  for(int i =0;i<N.length();i++){
    // char → intに変換※int()省略可
    count += int(N[i]-'0');
  }

  
  // -----------------------------------------
  /*
    型変換（int → char）
  */
  // 数値を変換したいとき
  N[i] = (a+3)%10 + '0';

  // その他
  int i = 97;
  char ch = (char) i;
  cout << ch << endl; //out:a


  // -----------------------------------------
  /*
    型変換（string ⇔ int）
  */
  // string → int
  string S = "123";
  int N = stoi(S);

  // int → string
  int N = 789;
  string S = to_string(N);

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

  // -----------------------------------------
  // ベクターの中身を反転する
  reverse(A.begin(), A.end());

}