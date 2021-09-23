#include <iostream>
# define st std::

int main(int ac, char **av)
{
    if (ac == 1)
        st cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << st endl;
    else
    {
        for (int i = 1; av[i]; i++)
            for(int j = 0; av[i][j]; j++)
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] -= 32;
                st cout << av[i][j];
            }
    }
    return (0);
}
