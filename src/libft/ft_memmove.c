/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liliza <liliza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:43:51 by liliza            #+#    #+#             */
/*   Updated: 2022/07/09 04:46:59 by liliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (n > 0 && (src || dest))
	{
		if (dest > src)
		{
			i = (int)n - 1;
			while (i >= 0)
			{
				*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
				i--;
			}
		}
		else
		{
			i = 0;
			while (i < (int)n)
			{
				*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
				i++;
			}
		}
	}
	return (dest);
}
