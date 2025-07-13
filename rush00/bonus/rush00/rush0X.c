#define TOP_LEFT 'o'
#define TOP_RIGHT 'o'
#define BOT_LEFT '0'
#define BOT_RIGHT 'o'
#define LINE '-'
#define COLUMN ''

voidi	ft_putchar(char c);

void	ft_print(int x, int y, int i, int j)
{
	if (i == 0 && j == 0)
		ft_putchar(TOP_LEFT);
	else if (i == 0 && j == y - 1)
		ft_putchar(TOP_RIGHT);
	else if (i == x - 1 && j == 0)
		ft_putchar(BOT_LEFT);
	else if (i == x - 1 && j == y - 1)
		ft_putchar(BOT_RIGHT);
	else if (i == 0 || i == x - 1)
		ft_putchar(LINE);
	else if (j == 0 || j == y - 1)
		ft_putchar(COLUMN);
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return (1);
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
