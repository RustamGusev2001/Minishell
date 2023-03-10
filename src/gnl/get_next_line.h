/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liliza <liliza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:45:35 by liliza            #+#    #+#             */
/*   Updated: 2022/07/09 04:49:07 by liliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*ft_save(char **save, char *str);
char	*ft_no_save(int fd, char **save, char *str);

size_t	ft_strlen(const char *str);
char	*ft_strnchr(const char *s, int c, int size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup_gnl(const char *s, int endl);
char	*ft_strjoin_gnl(char *s1, char const *s2, int endl);

#endif
