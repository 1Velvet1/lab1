#include "tasks.h"


int main() {

	long double k1, b1, k2, b2;
	double a, b, c;

	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	std::cout << "c = "; std::cin >> c;

	std::cout << BiggestOfThree(a, b, c) << std::endl;

	std::cout << "k1 = "; std::cin >> k1;
	std::cout << "b1 = "; std::cin >> b1;
	std::cout << "k2 = "; std::cin >> k2;
	std::cout << "b2 = "; std::cin >> b2;
	
	angle(k1, k2);


	return 0;

}