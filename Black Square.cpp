#include <iostream>
#include <string>
using namespace std;
int main() {
int a[4];
for (int i = 0; i < 4; i++) {
cin >> a[i];
}
string s;
cin >> s;
int toCal = 0;
for (char c : s) {
toCal += a[c - '1'];
}
cout << toCal << endl;
return 0;
