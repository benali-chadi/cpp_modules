#include "Mutantstack.cpp"

int main()
{
    Mutantstack<int> stack_i;

    stack_i.push(5);
    stack_i.push(10);
    stack_i.push(20);
    stack_i.push(3);
    
    std::cout << "-------Stack of Ints-------" << std::endl;
    std::cout << "-------METHODS-------" << std::endl;
    std::cout << stack_i.top() << std::endl;
    std::cout << stack_i.size() << std::endl;

    Mutantstack<int>::iterator it = stack_i.begin();
    Mutantstack<int>::iterator it_e = stack_i.end();
    Mutantstack<int>::reverse_iterator rit = stack_i.rbegin();
    Mutantstack<int>::reverse_iterator rit_e = stack_i.rend();

    std::cout << "-------ITERATORS-------" << std::endl;
    std::cout << "  Forward Iterator" << std::endl;
    for (;it != it_e; it++)
        std::cout << *it << std::endl;
    std::cout << "  Reverse Iterator" << std::endl;
    for (;rit != rit_e; rit++)
        std::cout << *rit << std::endl;


     Mutantstack<std::string> stack_s;

    stack_s.push("Something");
    stack_s.push("Another thing");
    stack_s.push("Chadi");
    stack_s.push("Cpp module 08");
    
    std::cout << "-------Stack of Strings-------" << std::endl;
    std::cout << "-------METHODS-------" << std::endl;
    std::cout << stack_s.top() << std::endl;
    std::cout << stack_s.size() << std::endl;

    Mutantstack<std::string>::iterator its = stack_s.begin();
    Mutantstack<std::string>::iterator its_e = stack_s.end();
    Mutantstack<std::string>::reverse_iterator rits = stack_s.rbegin();
    Mutantstack<std::string>::reverse_iterator rits_e = stack_s.rend();

    std::cout << "-------ITERATORS-------" << std::endl;
    std::cout << "  Forward Iterator" << std::endl;
    for (;its != its_e; its++)
        std::cout << *its << std::endl;
    std::cout << "  Reverse Iterator" << std::endl;
    for (;rits != rits_e; rits++)
        std::cout << *rits << std::endl;
}