/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liliza <liliza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:43:51 by liliza            #+#    #+#             */
/*   Updated: 2022/07/09 04:49:25 by liliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

t_dict	*ft_dictnew(char *key, char *value)
{
	t_dict	*res;

	res = malloc(sizeof(*res));
	if (!res)
		return (0);
	res->next = NULL;
	res->key = ft_strdup(key);
	res->value = ft_strdup(value);
	return (res);
}

t_dict	*ft_dictlast(t_dict *lst)
{
	t_dict	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_dictadd_back(t_dict **lst, t_dict *new)
{
	if (!*lst)
		(*lst) = new;
	else
		ft_dictlast(*lst)->next = new;
}

void	ft_free_dict(t_dict *dict)
{
	t_dict	*tmp;

	tmp = dict;
	while (dict)
	{
		tmp = dict->next;
		free(dict->key);
		free(dict->value);
		free(dict);
		dict = tmp;
	}
}
