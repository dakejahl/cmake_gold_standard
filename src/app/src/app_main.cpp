#include <iostream>

#include <mylib1/MyLib.hpp>

int main()
{
	std::cout << "This is the app\n";
	std::cout << "bippity boopity bop\n";

	auto bop = new MyLib();

	bop->do_something();

	return 0;
}