#include <iostream>

int main()
{
	int i;
	for (i = 1; i <= 100; i++) {
		if ((i % 3) == 0)
			std::cout << "Fizz";
		else if ((i % 5) == 0)
			std::cout << "Buzz";
		else if ((i % 15) == 0)
			std::cout << "FizzBuzz";
		else
			std::cout << i;
		std::cout << '\n';
	}
	return 0;
}
