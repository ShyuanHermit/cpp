#include <iostream>
using  namespace std;
int main() {
	int K;
	cin >> K;
	int N = 1;
	int f = 1;
	while (f % K != 0) {
		N++;
		f = 1;
		for (int i = 1; i <= N; ++i) {
			f *= i;
		}
	}
	cout << N << endl;
	return 0;
}//WA   
