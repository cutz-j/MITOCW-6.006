#include <iostream>

using namespace std;

const char BOARD[5][5] = { {'N', 'N', 'N', 'N', 'S'},
						  {'N', 'E', 'E', 'E', 'N'},
						  {'N', 'E', 'Y', 'E', 'N'},
						  {'N', 'E', 'E', 'E', 'N'},
						  {'N', 'N', 'N', 'N', 'N'} };

bool hasWord(int x, int y, const string& word) {
	int dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
	int dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	
	if (x > 5 || x < 0)
		return false;
	if (y > 5 || y < 0)
		return false;
	if (BOARD[x][y] != word[0])
		return false;
	if (word.size() == 1)
		return true;

	for (int d = 0; d < 8; d++) {
		int next_x = x + dx[d];
		int next_y = y + dy[d];
		if (hasWord(next_x, next_y, word.substr(1)))
			return true;
	}

	return false;
}

int q6_3(void) {
	int C, N, S;
	cin >> C;
	int* res = new int[C];

	int f_num1, f_num2;
	bool friends[10][10];

	for (int i = 0; i < C; i++) {
		cin >> N >> S;
		bool taken[10];
		for (int j = 0; j < C; j++) {
			std::cin >> f_num1 >> f_num2;
			friends[f_num1][f_num2] = friends[f_num2][f_num1] = true;
		}
		



	}


	return 0;
}

int solver(bool taken[10], bool friends[10][10], int n) {
	
	bool finish = true;

	for (int i = 0; i < n; i++) {
		if (!taken[n])
			finish = false;
	}

	if (finish)
		return 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!taken[i] && !taken[j] && friends[i][j])
				taken[i] = taken[j] = true;
		}

	}
	return 0;
}

int solver_2(bool taken[10], bool friends[10][10], int n) {
	int first = -1;
	for (int i = 0; i < n; i++) {
		if (!taken[i]) {
			first = i;
			break;
		}
	}
	
	if (first == -1)
		return 1;
	int ret = 0;

	for (int pair = first + 1; pair < n; pair++) {
		if (!taken[pair] && friends[first][pair]) {
			taken[first] = taken[pair] = true;
			ret += solver_2(taken, friends, n);
			taken[first] = taken[pair] = false;
		}
	}
	return ret;
}

int main(void) {
	/*const string word = "YES";
	if(hasWord(2, 2, word))
		cout << "found" << endl;*/
	q6_3();
	return 0;
}