#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string N;
    cin >> N;
    if((N[0]==N[1]&&N[0]==N[2]) || (N[1]==N[2]&&N[1]==N[3])) cout << "Yes" << endl;
    else cout << "No" << endl;
}
