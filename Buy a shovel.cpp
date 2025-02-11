#include <iostream>
using namespace std;
int main() {
    int k,r;
    cin>>k>>r;
    int n = 1;
    while (true) {
        int to=n * k;
        if (to%10== 0 || to% 10 == r) {
            cout<<n<<endl;
            break;
        }
        n++;
    }
    return 0;
}
