/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:14:10 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/26 15:35:09 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// utility functions
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strdup(char *s1);
size_t	ft_strlen(const char *str);
void	fill_str(char *res, char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);

#endif