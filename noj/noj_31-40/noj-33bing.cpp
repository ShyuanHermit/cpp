/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-33bing.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Nov 15 12:30:52 2023
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 2) {
        cout << 3;
        return 0;
    }
    if (n == 3) {
        cout << 5;
        return 0;
    }
    int ans = 5;
    for (int i = 5; i <= n; i += 2) {
        bool isPrime = true;
        for (int j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            ans += 4;
        }
    }
    cout << ans;
    return 0;
}

