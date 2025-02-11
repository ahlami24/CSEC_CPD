#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int Y, W;
    cin >> Y >> W;
    int high= max(Y, W);
    int fav= 6 - high+ 1;
    int total = 6;
    int g = __gcd(fav, total);
    cout << (fav/ g) << "/" << (total/g) << endl;
    return 0;
}
