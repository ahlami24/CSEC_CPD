#include<iostream>
#include <vector>
using namespace std;
int main() {
int n;
cin >> n;
vector<int> birds(n + 1);
for (int i = 1; i <= n; i++) {
cin >> birds[i];
}
int m;
cin >> m;
while (m--) {
int x, y;
cin >> x >> y;
int left = y - 1;
int right = birds[x] - y;
if (x > 1) {
birds[x - 1] += left;
}
if (x < n) {
birds[x + 1] += right;
}
birds[x] = 0;
}
for (int i = 1; i <= n; i++) {
cout << birds[i] << endl;
}
return 0;
}
