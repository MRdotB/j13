#include "ft_btree.h"
#include <stdio.h>

void	test1(void)
{
	t_btree *bt;
	int i = 5;

	bt = btree_create_node(&i);
	printf("bt->item = %d\n", *(int*)bt->item);
}

int		main(void)
{
	test1();
	return (0);
}

