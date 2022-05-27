#include "XList.h"
#include <iostream>
using namespace std;

int main()
{
	std::cout << "list\n";
	nc::list<int> numbers;
	numbers.push_back(12);
	numbers.push_back(78);
	numbers.push_back(12);
	numbers.push_back(34);
	numbers.push_back(9);

	numbers.push_back(10);
	numbers.push_front(8);
	numbers.write(std::cout);

	std::cout << "copy\n";
	nc::list<int> copy;
	copy = numbers;
	copy.pop_front();
	copy.pop_back();
	copy.pop_back();
	copy.write(std::cout);

	std::cout << "remove\n";
	copy.remove(12);
	copy.write(cout);

	std::cout << "reverse\n";
	numbers.reverse();
	numbers.write(std::cout);

	std::cout << "front: " << numbers.front() << std::endl;
	std::cout << "back: " << numbers.back() << std::endl;
	std::cout << "size: " << numbers.size() << std::endl;
	std::cout << "empty: " << numbers.empty() << std::endl;
}

