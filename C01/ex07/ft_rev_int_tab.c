void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while(i < size / 2)
	{
		int a = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = a;
		++i;
	}
}
