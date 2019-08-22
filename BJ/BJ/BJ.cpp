#include <iostream>

int a_10869(void) {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a % b << std::endl;


	return 0;
}

int a_10430(void) {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (a + b) % c << std::endl;
	std::cout << (a % c + b % c) % c << std::endl;
	std::cout << (a * b) % c << std::endl;
	std::cout << (a%c * b%c) % c << std::endl;
	return 0;
}

int a_2588(void) {
	int a, b;
	//char c[10];
	std::cin >> a >> b;
	//sprintf_s(c, "%d", b);
	//std::cout << a * (c[2] - '0') << std::endl; // char --> int  - '0'
	//std::cout << a * (c[1] - '0') << std::endl;
	//std::cout << a * (c[0] - '0') << std::endl;
	//std::cout << a * b;

	std::cout << a * (b % 10) << std::endl;
	std::cout << a * ((b % 100) / 10) << std::endl;
	std::cout << a * (b / 100) << std::endl;
	std::cout << a * b << std::endl;
	

	return 0;
}

int sub_1()
{
	a_2588();
	return 0;
}

