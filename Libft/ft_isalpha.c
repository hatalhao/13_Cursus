#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return(0);
}

int main()
{
	char ch;

	ch = 'p';
	ft_isalpha(ch);
	return (0);
}
