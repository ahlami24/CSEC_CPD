#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    char current = 'a'; 
    int rotations = 0;
    for (char c : s) {
        int clockwise = abs(c - current);
        int counterclockwise = 26 - clockwise;
        rotations += min(clockwise, counterclockwise);
        current = c;
    }
    cout << rotations << endl;
    return 0;
}
