/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liliza <liliza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:43:51 by liliza            #+#    #+#             */
/*   Updated: 2022/07/09 04:47:20 by liliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				flag;
	unsigned char	ch;

	flag = 1;
	ch = (unsigned char)c;
	while (*s != '\0' && flag)
	{
		if (*s == ch)
			flag = 0;
		s++;
	}
	if (flag && ch != '\0')
		return (0);
	if (ch == '\0')
		return ((char *)s);
	s--;
	return ((char *)s);
}
