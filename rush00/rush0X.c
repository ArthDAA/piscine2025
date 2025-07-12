#define top_left 'A'
#define top_right 'C'
#define bot_left 'A'
#define bot_right 'C'
#define line 'B'
#define column 'B'

void    ft_putchar(char c);

void	ft_print(int x, int y, int i, int j)
{
	if (i == 0 && j == 0)
		ft_putchar(top_left);
	else if (i == x && j == 0)
		ft_putchar(top_right);
	else if (i == 0 && j == y)
		ft_putchar(bot_left);
	else if (i == x && j == y)
		ft_putchar(bot_right);
	else if (i == 0 || i == x)
		ft_putchar(line);
	else if (j == 0 || j == y)
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
	while (i <= x)
	{
		while (j <= y)
		{
			ft_print(x, y, i, j);
			j++;
		}
		j = 0;
		i++;
	}
}