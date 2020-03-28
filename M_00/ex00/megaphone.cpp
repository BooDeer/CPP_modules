#include <iostream>

char	*toupper_string(char *str);

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";	
	else
		while (++i < argc)
			std::cout << toupper_string(argv[i]);
	std::cout << std::endl;
	return (0);
}


char	*toupper_string(char *str)
{
	int	i;

	i = -1;

	while (str[++i])
		str[i] = ::toupper(str[i]);
	return (str);
}
