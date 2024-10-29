#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int broj = 0;
	std::cin >> broj;
	std::cout << vsite::oop::v1::to_hex(broj) << std::endl;
	std::cout << vsite::oop::v1::to_exp(broj) << std::endl;
	vsite::oop::v1::mult_table(broj, std::cout);
}
