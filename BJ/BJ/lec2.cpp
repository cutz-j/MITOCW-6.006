#include <iostream>

int q1330(void) {
	int a, b;
	std::cin >> a >> b;
	if (a > b)
		std::cout << '>';
	else if (a < b)
		std::cout << '<';
	else if (a == b)
		std::cout << "==";

	return 0;
}

int q9498(void) {
	int score;
	std::cin >> score;

	if (score >= 90) {
		std::cout << "A";
		return 0;
	}
	else if (score >= 80) {
		std::cout << "B";
		return 0;
	}
	else if (score >= 70) {
		std::cout << "C";
		return 0;
	}
	else if (score >= 60) {
		std::cout << "D";
		return 0;
	}
	else {
		std::cout << "F";
		return 0;
	}
	return 0;
}

int q2753(void) {
	int year;
	std::cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}

int q2884(void) {
	int H, M, new_M;
	std::cin >> H >> M;

	new_M = M - 45;
	if (new_M < 0) {
		new_M = 60 + new_M;
		H -= 1;
	}

	if (H < 0)
		H = 23;

	std::cout << H << " " << new_M;


	return 0;
}

int q10817(void) {
	int num[3];
	int a, b, c;
	int tmp;
	std::cin >> a >> b >> c;
	num[0] = a;
	num[1] = b;
	num[2] = c;
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (i == j)
				continue;
			if (num[i] < num[j]) {
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	
	std::cout << num[1];

	return 0;
}