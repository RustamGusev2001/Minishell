/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liliza <liliza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:43:51 by liliza            #+#    #+#             */
/*   Updated: 2022/07/09 04:49:34 by liliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	main(int argc, char **argv, char **envp)
{
	int		i;

	i = 0;
	if (argc != 1)
	{
		errno = 7;
		warning(argv[0], errno, 1);
	}
	g_line.envp = new_envp(envp);
	g_line.status = 0;
	minishell();
	ft_free(g_line.envp);
	return (0);
}
