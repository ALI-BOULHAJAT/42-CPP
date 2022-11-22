#include <iostream>

#define LOG(x) std::cout << (char)toupper(x);

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for (size_t j = 0; j < str.length(); j++)
                LOG(str[j]);
		}
		std::cout << std::endl;
    }
    return (0);
}