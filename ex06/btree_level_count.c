/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaleil <bchaleil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 13:32:59 by bchaleil          #+#    #+#             */
/*   Updated: 2015/12/20 13:38:15 by bchaleil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		ft_max(int x, int y)
{
	return ((x > y) ? x : y);
}

int		btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	else
		return (ft_max(btree_level_count(root->left),
				btree_level_count(root->right)) + 1);
}
