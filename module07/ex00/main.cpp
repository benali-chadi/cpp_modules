# include "whatever.hpp"

int main()
{
    char    a_c = 'A', b_c = 'B';
    float   a_f = 13.37, b_f = 42.24;
    int     a_i = 5, b_i = 10;

    std::cout << "---------|char|---------" << std::endl;
    std::cout << "Before swap a = " << a_c << " b = " << b_c << std::endl;
    swap(a_c, b_c);
    std::cout << "After swap a = " << a_c << " b = " << b_c << std::endl;
    std::cout << "Min value = " << min(a_c, b_c) << std::endl;
    std::cout << "Max value = " << max(a_c, b_c) << std::endl;

    std::cout << "---------|float|---------" << std::endl;
    std::cout << "Before swap a = " << a_f << " b = " << b_f << std::endl;
    swap(a_f, b_f);
    std::cout << "After swap a = " << a_f << " b = " << b_f << std::endl;
    std::cout << "Min value = " << min(a_f, b_f) << std::endl;
    std::cout << "Max value = " << max(a_f, b_f) << std::endl;

    std::cout << "---------|float|---------" << std::endl;
    std::cout << "Before swap a = " << a_i << " b = " << b_i << std::endl;
    swap(a_i, b_i);
    std::cout << "After swap a = " << a_i << " b = " << b_i << std::endl;
    std::cout << "Min value = " << min(a_i, b_i) << std::endl;
    std::cout << "Max value = " << max(a_i, b_i) << std::endl;

    return 0;
}