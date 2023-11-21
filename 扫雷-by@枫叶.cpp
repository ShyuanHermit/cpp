#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<random>

#define RED_TEXT "\033[1;31m"
#define GREEN_TEXT "\033[1;32m"
#define YELLOW_TEXT "\033[1;33m"
#define BLUE_TEXT "\033[1;34m"
#define RESET_TEXT "\033[0m"
#define P "\033[1; 35m"
#define qingse "\033[1; 36m"
#define white "\033[1; 37m"

using namespace std;
string insideCh[50][50], outside[50][50], numberCh[50][50];
void shuffleArray(vector<int>& arr) {
	random_device rd;
	mt19937 gen(rd());
	for (int i = arr.size() - 1; i > 0; --i) {
		uniform_int_distribution<int> distribution(0, i);
		int j = distribution(gen);
		swap(arr[i], arr[j]);
	}
}

void zero(string(&outside)[50][50], string(&numberCh)[50][50], int p1, int p2) {
	if (outside[p1][p2] == "0") return;
	outside[p1][p2] = "0";
	for (int k = p1 - 1; k <= p1 + 1; k++) {
		for (int l = p2 - 1; l <= p2 + 1; l++) {
			if (numberCh[k][l] == "0") {
				zero(outside, numberCh, k, l);
			}
		}
	}
}
void print(int n, int  m) {
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < m + 1; j++) {
			if (i == 0 || j == 0)  cout << setw(3) << outside[i][j];
			else {
				if (outside[i][j] == "0")
					cout << BLUE_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "1")
					cout << GREEN_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "2")
					cout << GREEN_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "3")
					cout << YELLOW_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "4")
					cout << RED_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "5")
					cout << RED_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "?")
					cout << white << "  " << outside[i][j] << RESET_TEXT;
				else
					cout << RED_TEXT << "  " << outside[i][j] << RESET_TEXT;
			}
		}
		cout << endl;
	}
}

void printBoom(int n, int m,int p1,int p2) {
for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < m + 1; j++) {
			if (i == 0 || j == 0)  cout << setw(3) << outside[i][j];
			else {
				if (outside[i][j] == "0")
					cout << BLUE_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "1")
					cout << GREEN_TEXT << "  " << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "2")
					cout << GREEN_TEXT << "  "  << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "3")
					cout << YELLOW_TEXT << "  "  << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "4")
					cout << RED_TEXT <<"  "  << outside[i][j] << RESET_TEXT;
				else if (outside[i][j] == "5")
					cout << RED_TEXT << "  "  << outside[i][j] << RESET_TEXT;
				else if (i == p1 - 100 && j == p2 - 100 && outside[i][j] == "?") {
					outside[i][j] = RED_TEXT + outside[i][j] + RESET_TEXT;
					cout << RED_TEXT << "  " << outside[i][j] << RESET_TEXT;
				}
				else if (outside[i][j] == "?")
					cout << white << "  "  << outside[i][j] << RESET_TEXT;
				else 
					cout << RED_TEXT << "  " << outside[i][j] << RESET_TEXT;
			}
		}
		cout << endl;
	}

}


int main() {
	int n, m, boomboom;
	cout << "欢迎来到枫叶的扫雷小游戏" << endl;
	cout << "请输入行(n <= 48)" << endl;
	cin >> n;
	cout << "请输入列(m <= 48)" << endl;
	cin >> m;
	cout << "请输入埋下地雷个数" << endl;
	while (1) {
		cin >> boomboom;
		if (boomboom > n * m || boomboom == 0 )  cout << "您在逗我嘛？请重新输入" << endl;
		else break;
	}
	cout << "游戏胜利条件：选出所有地雷" << endl;
	cout << "输入 n m " << endl;
	cout << "当 n <= 48 , m <= 48 时，代表： 你所选择挖的地方" << endl;
	cout << "分别加上 100后 ， 即输入 n + 100 , m + 100 后 ，代表：你标记了一处地雷" << endl;
	cout << "当标记的地雷数量达到设置的地雷数量时，会进行判定，决定成败" << endl;

	for (int i = 0; i < n + 2; i++) {
		for (int j = 0; j < m + 2; j++) {
			outside[i][j] = "?";
			insideCh[i][j] = "?";
		}
	}
	for (int i = 0; i < n + 1; i++) {
		outside[i][0] = to_string(i);
	}
	for (int i = 0; i < m + 1; i++) {
		outside[0][i] = to_string(i);
	}
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < m + 1; j++) {
			cout << setw(3) << outside[i][j];
		}
		cout << endl;
	}
	vector<int> postion(n * m);
	for (int i = 0; i < n * m; i++) 	postion[i] = i + 1;
	shuffleArray(postion);
	for (int i = 0; i < boomboom; i++) {
		int row = (postion[0] - 1) / m + 1;
		int col = (postion[0] - 1) % m + 1;
		insideCh[row][col] = "*";
		postion.erase(postion.begin());
	}
	cout << "-------------------------------------" << endl;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			if (insideCh[i][j] == "*") numberCh[i][j] = insideCh[i][j];
			else {
				int boom = 0;
				for (int k = i - 1; k <= i + 1; k++) {
					for (int l = j - 1; l <= j + 1; l++) {
						if (insideCh[k][l] == "*") boom++;
					}
				}
				numberCh[i][j] = boom + '0';
			}
		}
	}
	int count = 0;
	bool ok = true;
	while (1) {
		cout << "请输入你想挖的地雷: n m" << endl;
		int p1, p2;
		while (1) {
			cin >> p1 >> p2;
			if ((p1 > 0 && p1 <= n && p2 > 0 && p2 <= m) || (p1 > 100 && p1 <= n + 100 && p2 > 100 && p2 <= m + 100))
			{
				if (p1 < 100) {
					if (outside[p1][p2] == "?") break;
					else cout << "您已挖出此处，请重新选择一处" << endl;
				}
				else {
					if (outside[p1 - 100][p2 - 100] == "?") break;
					else cout << "您已挖出此处，请重新选择一处" << endl;
				}
			}
			else cout << "您输入有误，请重新输入" << endl;
		}
		if (p1 < 100) {
			if (insideCh[p1][p2] == "*") {
				cout << "哎呀，你挖到地雷了" << endl;
				cout << "游戏结束！" << endl;
				break;
			}
			else {
				if (numberCh[p1][p2] != "0") {
					outside[p1][p2] = numberCh[p1][p2];
				}
				else zero(outside, numberCh, p1, p2);
				print(n, m);
			}
		}
		else {
			printBoom(n, m, p1, p2);
			if (insideCh[p1][p2] == "*") ok = false;
			count++;
			cout << "您还剩下 " << boomboom - count << " 个炸弹未排除" << endl;
		}
		cout << "-------------------------------------" << endl;
		if ( boomboom == count) {
			if (ok) {
				cout << "恭喜你排除所有地雷，获得游戏胜利！" << endl;
				break;
			}
			else {
				cout << "有地雷未选中" << endl;
				cout << "游戏失败" << endl;
			}
		}
	}
	return 0;
}
