#include "mutantstack.cpp"

int main()
{
    MutantStack<float> stack_f;

    stack_f.push(13.37);
    stack_f.push(10.04);
    stack_f.push(20.12);
    stack_f.push(42.24);
    
    std::cout << "-------Stack of Ints-------" << std::endl;
    std::cout << "-------METHODS-------" << std::endl;
    std::cout << stack_f.top() << std::endl;
    std::cout << stack_f.size() << std::endl;

    MutantStack<float>::iterator it = stack_f.begin();
    MutantStack<float>::iterator it_e = stack_f.end();
    MutantStack<float>::reverse_iterator rit = stack_f.rbegin();
    MutantStack<float>::reverse_iterator rit_e = stack_f.rend();

    std::cout << "-------ITERATORS-------" << std::endl;
    std::cout << "  Forward Iterator" << std::endl;
    for (;it != it_e; it++)
        std::cout << *it << std::endl;
    std::cout << "  Reverse Iterator" << std::endl;
    for (;rit != rit_e; rit++)
        std::cout << *rit << std::endl;


     MutantStack<std::string> stack_s;

    stack_s.push("Something");
    stack_s.push("Another thing");
    stack_s.push("Chadi");
    stack_s.push("Cpp module 08");
    
    std::cout << "-------Stack of Strings-------" << std::endl;
    std::cout << "-------METHODS-------" << std::endl;
    std::cout << stack_s.top() << std::endl;
    std::cout << stack_s.size() << std::endl;

    MutantStack<std::string>::iterator its = stack_s.begin();
    MutantStack<std::string>::iterator its_e = stack_s.end();
    MutantStack<std::string>::reverse_iterator rits = stack_s.rbegin();
    MutantStack<std::string>::reverse_iterator rits_e = stack_s.rend();

    std::cout << "-------ITERATORS-------" << std::endl;
    std::cout << "  Forward Iterator" << std::endl;
    for (;its != its_e; its++)
        std::cout << *its << std::endl;
    std::cout << "  Reverse Iterator" << std::endl;
    for (;rits != rits_e; rits++)
        std::cout << *rits << std::endl;
    
    std::cout << "-------Subject tests-------" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it2 = mstack.begin();
    MutantStack<int>::iterator ite2 = mstack.end();
    ++it;
    --it;
    while (it2 != ite2)
    {
        std::cout << *it << std::endl;
        ++it2;
    }
    std::stack<int> s(mstack);
    return 0;
}