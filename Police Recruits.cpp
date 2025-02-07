#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int officers = 0, untreatedCrimes = 0;
for (int i = 0; i < n; i++) {
int event;
cin >> event;
if (event == -1) {
if (officers > 0) {
officers--;
} else {
untreatedCrimes++;
}
} else {
officers += event;
} }
cout << untreatedCrimes << endl;
return 0
