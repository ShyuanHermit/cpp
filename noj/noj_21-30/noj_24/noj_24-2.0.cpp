#include <bits/stdc++.h>//by @·ãÒ¶ 
using namespace std;
int main() {
	int k,i = 1;
	long long n = 1;
	cin >> k; 
	do{
		n *= i++;
	}while( !(n % k == 0)); 
	cout<<i - 1;
	return 0;
}//WA
