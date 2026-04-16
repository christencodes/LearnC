#include <iostream>

int main() 
{
	//This is defining a variable
	//int height;
	//This is variable assignment
	//height = 5;

	//initialization - defining and assigning a initial value of an object
	//int width { 5 };
	/*
	*width is the variable
	*{5} is the initializer
	*5 is the initial value
	*/

	//list-initialization does not allow narrowing-conversion
	//this throws and error
	int w1 { 4 };
	//this compiles - should convert to 4?
	std::cout << w1;
	int w2 (4);
	std::cout << w2;

	return 0;
}