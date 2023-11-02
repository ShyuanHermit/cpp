#include <iostream>
using namespace std;
int main() {
    unsigned long long a, b, m, ans = 1;
    cin >> a >> b >> m;
    while (b) {
        if (b & 1) ans = ans * a % m;
        b >>= 1;
        a = a * a % m;
    }
    cout << ans << endl;
    return 0;
}
