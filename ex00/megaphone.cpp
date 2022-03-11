#include <iostream>

char	to_upper(char c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}

int main (int argc, char **argv)
{

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; argv[i]; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << to_upper(argv[i][j]);
	std::cout << std::endl;
	return (0);
}
