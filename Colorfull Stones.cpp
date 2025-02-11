#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int p= 1;
    for (char instruction : t) {
        if (s[p- 1] == instruction) {
            p++;
        }
    }
    cout <<p<< endl;
      return 0;}
