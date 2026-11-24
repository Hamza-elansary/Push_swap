int	parse_flag(const char *s, int flags[5])
{
	int	idx;
	int	i;

	idx = flag_index(s);
	if (idx < 0)
		return (-1);
	i = 0;
	while (idx != 4 && i < 4)
	{
		if (flags[i] != 0 && i != idx)
			return (-1);
		i++;
	}
	flags[idx] = 1;
	return (0);
}
