#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  bool a = true;
  bool b = x < 10;
  bool c = false;

  if (a && b) {
    cout << "hello" << endl;
  }
  if (c) {
    cout << "world" << endl;
  }
}