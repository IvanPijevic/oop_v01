#include "app.h"

namespace vsite::oop::v1
{
	std::string to_hex(int broj)
	{

		return std::format("{:X}", broj);
	}

	std::string to_exp(double broj)
	{
				
		return std::format("{:.2e}", broj);
	}

	void mult_table(int broj, std::ostream& os)
	{
		if (broj == 0 || broj > 20)
		{
			return;
		}
		else
		{
			for (int i = 0; i <= broj; i++)
			{
				os << i;
				for (int j = 1; j <= broj; j++)
				{
					if (i == 0 && j == 0)
					{
						os << 0;
					}
					if (i == 0 && j != 0)
					{
						os << std::format("{:>4}", j);
					}
					if (j == 0 && i != 0)
					{
						os << i;
					}
					if (j != 0 && i != 0)
					{
						os << std::format("{:>4}", i * j);
					}
					
				}

				os << "\n";
			}
		}
	}
} //namespace

