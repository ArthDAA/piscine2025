void	rush(int x, int y, char a, char b, char c, char d, char e, char f);

int	main(int argc, char **argv)
{
	if (argc != 7)
	{
		write(1, "6 arguments svp!", 16);
		return (1);
	}
	rush(23, 42, argv[1][0], argv[2][0], argv[3][0],
		argv[4][0], argv[5][0], argv[6][0]);
	return (0);
}
