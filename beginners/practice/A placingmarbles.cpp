#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  char check = '1';
  
  int count = 0;
  for (int i = 0; (i = s.find(check, i)) != std::string::npos; i++) {
    count++;
  }
  
  cout <<  count << endl;
}