#include <iostream>
#include <cmath>
using namespace std;
double calWindC(double t, double windS) {
    double windC = 13.12 + 0.6215 * t - 11.37 * pow(windS, 0.16) + 0.3965 * t * pow(windS, 0.16);
    return windC;
}
int main() {
    double t, windS;
    cin >> windS;
    cin >> t;
    double windC = calWindC(t, windS);
    cout << round(windC)<< endl;
    return 0;
}
