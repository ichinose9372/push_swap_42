/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:53:48 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/21 15:34:13 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_all_free(t_node **list_a, t_node **list_b)
{
	t_node	*tmp;

	while (*list_a)
	{
		tmp = (*list_a)->next;
		free(*list_a);
		*list_a = tmp;
	}
	free(list_a);
	free(list_b);
}

void	str_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
