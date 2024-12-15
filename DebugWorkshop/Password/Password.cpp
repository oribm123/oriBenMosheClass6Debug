#include <iostream>

struct Password
{
	char value[16];  
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{

	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value; //a password with length of 16 takes all the place in value and t hen the \0 that is added automaticly adds at the place of incorrect so it becomes false


	if (!strcmp(pwd.value, "********")) 
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
