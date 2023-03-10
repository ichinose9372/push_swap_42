/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:17:20 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/18 17:12:26 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_node	**ft_two_sort(t_node **list_a)
{
	t_node	*tmp;

	tmp = (*list_a)->next;
	if ((*list_a)-> num > tmp->num)
		ft_sa(list_a);
	return (list_a);
}

t_node	**ft_three_sort_next(t_node	**list_a, t_node *tmp)
{
	if ((*list_a)->num < (tmp->next)->num && tmp->num > (tmp->next)->num)
	{
		ft_sa(list_a);
		ft_ra(list_a);
	}
	else if ((*list_a)->num > (tmp->next)->num)
		ft_rra(list_a);
	(*list_a)->prev = NULL;
	return (list_a);
}

t_node	**ft_three_sort(t_node **list_a)
{
	t_node	*tmp;

	tmp = (*list_a)->next;
	if ((*list_a)->num > tmp->num)
	{
		if ((tmp->num < (tmp->next)->num) && (*list_a)->num < (tmp->next)->num)
			ft_sa(list_a);
		else if ((tmp->num < (tmp->next)->num) && (*list_a)->num
			> (tmp->next)->num)
			ft_ra(list_a);
		else if (tmp->num > (tmp->next)->num)
		{
			ft_sa(list_a);
			ft_rra(list_a);
		}
	}
	else
		ft_three_sort_next(list_a, tmp);
	return (list_a);
}
