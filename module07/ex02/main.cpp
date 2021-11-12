#include "Array.hpp"

int main()
{
	size_t n = 5;
	Array<int> arr_i(n);

	for (size_t i = 0; i < arr_i.size(); i++)
		arr_i[i] = i + 1;
	
	Array<std::string> arr_s(n);

	for (size_t i = 0; i < arr_s.size(); i++)
		arr_s[i] = static_cast<std::string>("somthing and ") + static_cast<char>(i + 33);
	
	std::cout << "Array of int " << std::endl;
	for (size_t i = 0; i < arr_i.size(); i++)
		std::cout << arr_i[i] << std::endl;

	std::cout << "\nArray of string " << std::endl;
	for (size_t i = 0; i < arr_s.size(); i++)
		std::cout << arr_s[i] << std::endl;

	return 0;
}