#include <iostream>

namespace sum {
	int calc(int x, int y) {
		return x + y;
	}
}

namespace sub {
	int calc(int x, int y) {
		return x - y;
	}
}

namespace mult {
	int calc(int x, int y) {
		return x * y;
	}
}

namespace divide {
	int calc(int x, int y) {
		return x / y;
	}
}

int main() {
	int x{ 6 };
	int y{ 10 };
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "Summ: " << sum::calc(x, y) << std::endl;;
	std::cout << "Substraction: " << sub::calc(x, y) << std::endl;
	std::cout << "Multiplication: " << mult::calc(x, y) << std::endl;
	std::cout << "Division: " << divide::calc(x, y) << std::endl;
}