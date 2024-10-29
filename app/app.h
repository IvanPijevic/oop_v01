#pragma once

#include <string>
#include <iostream>
#include <format>
#include <iomanip>


namespace vsite::oop::v1
{
	std::string to_hex(int broj);
	std::string to_exp(double broj);
	void mult_table(int broj, std::ostream& os);

}
