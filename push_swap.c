#include "push_swap.h"
void	test_stack(void)
{
	lst_node	*stack_a = NULL;
	lst_node	*stack_b = NULL;
	lst_node	*node1 = new_node(33);
	lst_node	*node2 = new_node(4);	
	lst_node	*node3 = new_node(13);
	lst_node	*node4 = new_node(99);
	lst_node	*node5 = new_node(47);
	lst_node	*node6 = new_node(2);
	lst_node	*node7 = new_node(57);
	lst_node	*node8 = new_node(6);

	stack_a = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	node7->next = node8;
	node8->next = NULL;



	print_stack(stack_a,stack_b);
	r_stack(&stack_a);
	
	print_stack(stack_a,stack_b);
	r_stack(&stack_a);
	
	print_stack(stack_a,stack_b);
	r_stack(&stack_a);
	
	print_stack(stack_a,stack_b);
	r_r_stack(&stack_a);
	
	print_stack(stack_a,stack_b);
	r_r_stack(&stack_a);
	
	print_stack(stack_a,stack_b);
	r_r_stack(&stack_a);
	
	print_stack(stack_a,stack_b);
	r_r_stack(&stack_a);
	
	print_stack(stack_a,stack_b);
	swap_stack(&stack_a);
	
	print_stack(stack_a , stack_b);
	swap_stack(&stack_a);
	
	print_stack(stack_a , stack_b);
	swap_stack(&stack_a);
	
	print_stack(stack_a , stack_b);
	push_stack(&stack_b, &stack_a);
	print_stack(stack_a , stack_b);
	push_stack(&stack_b, &stack_a);
	print_stack(stack_a , stack_b);
}
void 	push_swap(int argc, char **argv)
{
	int i = argc;
/*
	if (ft_comp(argv[1],"--simple"))
		ft_printf("simple : OK");
	else if (ft_comp(argv[1], "--medium"))
		ft_printf("medium : OK");
	else if (ft_comp(argv[1], "--complex"))
		ft_printf("complex : OK");
	else if (ft_comp(argv[1], "--adaptive"))
		ft_printf("adaptive : OK");
	else
		ft_printf("Error.:");
*/
	i++;
	if (ft_comp(argv[1],"--simple"))
		test_stack();	
	else if (ft_comp(argv[1], "--medium"))
		test_stack();	
	else if (ft_comp(argv[1], "--complex"))
		test_stack();	
	else if (ft_comp(argv[1], "--adaptive"))
		test_stack();
	else
		test_stack();
}
