#include "push_swap.h"
void    print_stack(lst_node *a, lst_node *b)
{
	ft_printf("-----------------\n");
        ft_printf("STACK_A | STACK_B\n");
        ft_printf("-----------------\n");
        while (a || b)
        {
                if (a)
                {
                        ft_printf("%d", a->content);
                        a = a->next;
                }
                ft_printf("\t   ");
                if (b)
                {
                        ft_printf("%d", b->content);
                        b = b->next;
                }
                ft_printf("\n");
        }
}
