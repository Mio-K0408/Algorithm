#include <bits/stdc++.h>
using namespace std;
int main(void){
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i=0; i<H; i++) {
        cin >> S[i];
    }
    
    // この座標を使うことで、上下左右、斜めの全8か所を網羅できる
    vector<int> DX = {1, 0, -1, 0, 1, 1, -1, -1};
    vector<int> DY = {0, 1, 0, -1, 1, -1, 1, -1};
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S[i][j] != '.') {
                // 自分が爆弾なのでスキップ
                continue;
            }
            int count = 0;
            for(int z=0;z<8;z++){
                // 自分を中心に8か所の状態をチェック
                int ix = i + DX[z];
                int iy = j + DY[z];
                // 移動先が一番端だった場合は、処理なし
                if(ix<0 || ix>=H || iy<0 || iy>=W){
                    continue;
                }
                // 移動先が爆弾だった場合はカウントアップ
                if(S[ix][iy] == '#') count++;
            }
            // 計算結果を格納
            // int → charへ型変換
            S[i][j] = '0' + count;
        }
    }
    for(string item:S) cout << item << endl;
}
