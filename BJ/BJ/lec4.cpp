#include <iostream>

int q10952(void) {
	int a, b;
	while (1) {
		std::cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		std::cout << a + b << std::endl;
	}

	return 0;
}

int q10951(void) {
	int a, b;
	while (1) {
		std::cin >> a >> b;
		if (std::cin.eof()) // 파일 종료!
			break;
		std::cout << a + b << std::endl;
	}
	return 0;
}

int q1110(void) {
	int a, b;
	int arr[2];
	int i = 0;
	std::cin >> a;
	b = a;
	while (1) {
		arr[0] = b / 10;
		arr[1] = b % 10;
		b = (arr[1]*10) + (arr[0] + arr[1])%10;
		i++;
		if (a == b) {
			std::cout << i << std::endl;
			break;
		}
	}

	return 0;
}

int sub(void) {
	q1110();

	return 0;
}

