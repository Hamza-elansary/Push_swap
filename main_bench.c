#include "push_swap.h"

int	main(void)
{
	size_t	ops[RRR + 1] = {12, 3, 1, 25, 25, 40, 15, 5, 10, 8, 2};
	int		flags_adaptive[BENCH_IDX + 1] = {0, 0, 0, 1, 1};
	int		flags_simple[BENCH_IDX + 1] = {1, 0, 0, 0, 1};
	int		flags_medium[BENCH_IDX + 1] = {0, 1, 0, 0, 1};
	int		flags_complex[BENCH_IDX + 1] = {0, 0, 1, 0, 1};

	ft_putstr_fd(2, "=== TEST 1: Adaptive (High Disorder: 78.45%) ===\n");
	print_bench(flags_adaptive, 0.7845f, ops);

	ft_putstr_fd(2, "\n=== TEST 2: Adaptive (Low Disorder: 12.50%) ===\n");
	print_bench(flags_adaptive, 0.1250f, ops);

	ft_putstr_fd(2, "\n=== TEST 3: Edge Case (0% Disorder) ===\n");
	print_bench(flags_adaptive, 0.0f, ops);

	ft_putstr_fd(2, "\n=== TEST 4: Edge Case (100% Disorder) ===\n");
	print_bench(flags_adaptive, 1.0f, ops);

	ft_putstr_fd(2, "\n=== TEST 5: Forced Simple ===\n");
	print_bench(flags_simple, 0.8500f, ops);

	ft_putstr_fd(2, "\n=== TEST 6: Forced Medium ===\n");
	print_bench(flags_medium, 0.0500f, ops);

	ft_putstr_fd(2, "\n=== TEST 7: Forced Complex ===\n");
	print_bench(flags_complex, 0.1000f, ops);

	return (0);
}
