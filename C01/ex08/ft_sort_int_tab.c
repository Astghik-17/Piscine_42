void swapp(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		int is_swapped = 0;
		int j;

		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swapp(tab + j, tab + j + 1);
				is_swapped = 1;
			}
			++j;
		}
		if(!is_swapped)
		{
			break;
		}
		++i;
	}
}
