/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liliza <liliza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:43:51 by liliza            #+#    #+#             */
/*   Updated: 2022/07/09 04:49:26 by liliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

t_cmd	*ft_cmdnew(void)
{
	t_cmd	*res;

	res = malloc(sizeof(*res));
	if (!res)
		return (0);
	res->next = NULL;
	res->count = 0;
	res->args = NULL;
	res->outfd = NULL;
	res->tmpfile = 0;
	res->infd = NULL;
	return (res);
}

t_cmd	*ft_cmdlast(t_cmd *lst)
{
	t_cmd	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_cmdadd_back(t_cmd **lst, t_cmd *new)
{
	if (!*lst)
		(*lst) = new;
	else
		ft_cmdlast(*lst)->next = new;
}

void	ft_free_cmd(t_cmd *cmd)
{
	t_cmd	*tmp;

	tmp = cmd;
	while (tmp)
	{
		tmp = cmd->next;
		ft_free(cmd->args);
		free(cmd->i);
		ft_free_dict(cmd->infd);
		ft_free_dict(cmd->outfd);
		free(cmd);
		cmd = tmp;
	}
}

int	ft_cmdlen(t_cmd *cmd)
{
	int	i;

	i = 0;
	while (cmd)
	{
		i++;
		cmd = cmd->next;
	}
	return (i);
}
