#include <iostream>

int main()
{
	unsigned int size = 0;

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size > 0) //because size is unsigned coudlt be less then 0 so only check if size > 0 and else means it is 0
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}