#include <iostream>

int main()
{
	unsigned int n;

	std::cin >> n;

	while (true)
	{
		std::cout << n << std::endl;
		if (n == 1) break;
		if (n % 2 == 0) n = n /= 2;
		else n = n * 3 + 1;
	}
}
