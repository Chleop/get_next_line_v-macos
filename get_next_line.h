/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:41:41 by cproesch          #+#    #+#             */
/*   Updated: 2021/08/09 15:43:42 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_find(char c, char *str);
void	*ft_memcpy(char *dst, char *src, int n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_del(char *str);
char	*ft_substr(char *s, int start, int len);
char	*get_next_line(int fd);

#endif
