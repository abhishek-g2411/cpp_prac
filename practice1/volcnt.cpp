#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  int c = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' ||
        s[i] == 'u') {
      cout << s[i] << " ";
      // c++;g++ volcnt.cpp -o volcnt
//bjfkerg
      c = c + 1;
      // c+=1;
    }
  }
  cout << endl;
  cout << "No of vowels : " << c;
}
