#define top_left 'A'
#define top_right 'A'
#define bot_left 'C'
#define bot_right 'C'
#define line 'B'
#define column 'B'

void    ft_putchar(char c);

void	ft_print(int x, int y, int i, int j)
{
	if (i == 0 && j == 0)
		ft_putchar(top_left);
	else if (i == 0 && j == y - 1)
		ft_putchar(top_right);
	else if (i == x - 1 && j == 0)
		ft_putchar(bot_left);
	else if (i == x - 1 && j == y - 1)
		ft_putchar(bot_right);
	else if (i == 0 || i == x - 1)
		ft_putchar(line);
	else if (j == 0 || j == y - 1)
		ft_putchar(column);
	else
		ft_putchar(' ');
}

void    rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	if (x <= 0 || y <= 0)
		return;

	while (i < x)
	{
		while (j < y)
		{
			ft_print(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
