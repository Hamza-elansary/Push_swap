#include "push_swap.h"

/* --- Mock Enums & Constants --- */

/* --- Mock Helper Functions --- */

static void	put_pct(float disorder)
{
	int	whole;
	int	dec;

	whole = (int)(disorder * 100);
	dec = (int)((disorder * 10000)) % 100;
	ft_putnbr_fd(2, whole);
	ft_putstr_fd(2, ".");
	if (dec < 10)
		ft_putstr_fd(2, "0");
	ft_putnbr_fd(2, dec);
	ft_putstr_fd(2, "%");
}

static int	pick_strategy(int flags[BENCH_IDX + 1], float disorder)
{
	if (flags[SIMPLE_IDX])
		return (SIMPLE_IDX);
	if (flags[MEDIUM_IDX])
		return (MEDIUM_IDX);
	if (flags[COMPLEX_IDX])
		return (COMPLEX_IDX);
	if (disorder < 0.2f)
		return (SIMPLE_IDX);
	if (disorder < 0.5f)
		return (MEDIUM_IDX);
	return (COMPLEX_IDX);
}

/* --- Your Code --- */
static const char	*op_name(int op)
{
	if (op == SA)
		return ("sa");
	if (op == SB)
		return ("sb");
	if (op == SS)
		return ("ss");
	if (op == PA)
		return ("pa");
	if (op == PB)
		return ("pb");
	if (op == RA)
		return ("ra");
	if (op == RB)
		return ("rb");
	if (op == RR)
		return ("rr");
	if (op == RRA)
		return ("rra");
	if (op == RRB)
		return ("rrb");
	return ("rrr");
}

static void	put_strategy(int flags[BENCH_IDX + 1], float disorder)
{
	int	used;

	if (flags[SIMPLE_IDX])
		ft_putstr_fd(2, "Simple");
	else if (flags[MEDIUM_IDX])
		ft_putstr_fd(2, "Medium");
	else if (flags[COMPLEX_IDX])
		ft_putstr_fd(2, "Complex");
	else
		ft_putstr_fd(2, "Adaptive");
	ft_putstr_fd(2, " / ");
	used = pick_strategy(flags, disorder);
	if (used == SIMPLE_IDX)
		ft_putstr_fd(2, "O(n\302\262)");
	else if (used == MEDIUM_IDX)
		ft_putstr_fd(2, "O(n\342\210\232n)");
	else
		ft_putstr_fd(2, "O(n log n)");
}

static void	put_counts(size_t ops[RRR + 1], int from, int to)
{
	ft_putstr_fd(2, "[bench] ");
	while (from <= to)
	{
		ft_putstr_fd(2, op_name(from));
		ft_putstr_fd(2, ": ");
		ft_putnbr_fd(2, (int)ops[from]);
		if (from < to)
			ft_putstr_fd(2, " ");
		from++;
	}
	ft_putstr_fd(2, "\n");
}

void	print_bench(int flags[BENCH_IDX + 1], float disorder, size_t ops[RRR + 1])
{
	size_t	total;
	int		i;

	total = 0;
	i = 0;
	while (i <= RRR)
	{
		total += ops[i];
		i++;
	}
	ft_putstr_fd(2, "[bench] disorder: ");
	put_pct(disorder);
	ft_putstr_fd(2, "\n[bench] strategy: ");
	put_strategy(flags, disorder);
	ft_putstr_fd(2, "\n[bench] total_ops: ");
	ft_putnbr_fd(2, (int)total);
	ft_putstr_fd(2, "\n");
	put_counts(ops, SA, PB);
	put_counts(ops, RA, RRR);
}
