#include <iostream>
#include <fstream>
using namespace std;


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
	//int w1 { 4 };
	//this compiles - should convert to 4?
	

	//an unused variable will throw a compiler error
	//[[maybe_unused]] tells the compiler that it's okay if it's unused
	//[[maybe_unused]]int x{};

	//[[maybe_unused]] int x{ 99 };

	

	
	//std::cout << "Hi!" << std::endl;
	//std::cout << "My name is Chris!" << std::endl;
	
	//'\n' is more efficient than using std::endl 
	// '\n' does cause the buffer to be flushed when used



	//int lucky{ 7 };
	//std::cout << "Hi!\n";
	//std::cout << "My name is Chris" << " and my favorite number is " << lucky << '/n';

	//<< - insertion operator
	//>> - extraction operator
	//int x{};
	//std::cout << "Enter a number!\n";
	//std::cin >> x;
	//std::cout << "The number is " << x;
	//int a{};
	//int b{};
	//std::cout << "Enter two numbers separated by a space! ";
	//std::cin >> a >> b;
	//std::cout << "Your name is " << a << " " << b;
	//
	//
	//return 0;

	//int pi{ 3 };
	//std::cout << "I have " << pi << " sodas";

	//int age{ 34 };
	//std::cout << "Hi!\n";
	//std::cout << "My name is ChristenCodes!\n";
	//std::cout << "I am " << age << " years old!\n";

	//int age{};
	//int date{};

	//std::cout << "Enter your age\n";
	//std::cin >> age;
	//std::cout << "Enter the todays date\n";
	//std::cin >> date;
	//std::cout << "Your are " << age << " years old" << "and todays date is " << date;

	//std::cout << "Enter a number ";
	//int x{};
	//std::cin >> x;
	//std::cout << "You entered " << x << '\n';

	//int x{};
	//int y{};
	//int z{};

	//std::cout << "Enter three numbers: ";
	//std::cin >> x >> y >> z;
	//std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";


	//return 0;

	ofstream MyFile("testfile.txt");

	std::string answer{};
	std::cout << "What is your name? ";
	std::cin >> answer;
	MyFile << answer;
	MyFile.close();




	return 0;
	
	

}