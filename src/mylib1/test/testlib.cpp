#include <mylib1/MyLib.hpp>

#include <iostream>

int main ()
{
	// Test it
	std::cout << "This is a test\n";
	auto b = new MyLib();

	b->do_something();

	return 0;
}