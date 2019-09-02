#include <iostream>


int q2739(void) {
	int a;
	std::cin >> a;
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, a*i);
	}

	return 0;
}

int q10950(void) {
	int T;
	int a, b;
	std::cin >> T;
	
	for (int i = 0; i < T; i++) {
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
	}

	return 0;
}

int q8393(void) {
	int a;
	int res = 0;
	std::cin >> a;
	for (int i = 1; i <= a; i++)
		res += i;
	printf("%d", res);
	return 0;
}

int q15552(void) {
	int T;
	int a, b;
	std::cin.tie(NULL);
	std::cin >> T;
	std::ios_base::sync_with_stdio(false);
	for (int i = 0; i < T; i++) {
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}
	return 0;
}

int q2741(void) {
	int N;
	std::cin >> N;
	for (int i=1; i <= N; i++)
		std::cout << i << "\n";

	return 0;
}

int q2742(void) {
	int N;
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin >> N;
	for (int i = N; i > 0; i--)
		std::cout << i << "\n";

	return 0;
}

int q11021(void) {
	int a, b, T;
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin >> T;

	for (int i = 0; i < T; i++) {
		std::cin >> a >> b;
		std::cout << "Case #" << i + 1 << ": " << a + b << "\n";
	}

	return 0;
}

int q11022(void) {
	int a, b, T;
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin >> T;

	for (int i = 0; i < T; i++) {
		std::cin >> a >> b;
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
	return 0;
}

int q2438(void) {
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}

int q2439(void) {
	int N;
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= N; j++) {
			if (j < N-i)
				std::cout << " ";
			else if (j >= N-i)
				std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}

int q10871(void) {
	int N, X, a;
	std::cin >> N >> X;
	
	for (int i = 0; i < N; i++) {
		std::cin >> a;
		if (a < X)
			printf("%d ", a);
	}

	return 0;
}

int lec3(void) {
	q10871();

	return 0;
}