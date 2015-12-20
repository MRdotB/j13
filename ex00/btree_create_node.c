/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaleil <bchaleil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:01:17 by bchaleil          #+#    #+#             */
/*   Updated: 2015/12/20 12:00:03 by bchaleil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *btree;

	if (!(btree = malloc(sizeof(t_btree))))
		return (NULL);
	btree->left = NULL;
	btree->right = NULL;
	btree->item = item;
	return (btree);
}
