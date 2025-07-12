void    ft_putchar(char c);

void	ft_print(int x, int y, int i, int j, char *character)
{
	if (i == 0 && j == 0)
		ft_putchar(character[1]);
	else if (i == 0 && j == y - 1)
		ft_putchar(character[2]);
	else if (i == x - 1 && j == 0)
		ft_putchar(character[3]);
	else if (i == x - 1 && j == y - 1)
		ft_putchar(character[4]);
	else if (i == 0 || i == x - 1)
		ft_putchar(character[5]);
	else if (j == 0 || j == y - 1)
		ft_putchar(character[6]);
	else
		ft_putchar(' ');
}

void    rush(int x, int y, char a, char b, char c, char d, char e, char f)
{
	int	i;
	int	j;
	char characters[6];

	i = 0;
	j = 0;
	*characters = [a], [b], [c], [d], [e], [f];

	if (x <= 0 || y <= 0)
		return;

	while (i < x)
	{
		while (j < y)
		{
			ft_print(x, y, i, j, characters);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
