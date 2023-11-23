/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:10:41 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/23 12:08:42 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*chyatacheck(char *chyata, char **readbuf);
char	*readfile(char	**chyata, char *buf, char **readbuf, int fd);
int		newline(char *buf);
char	*ft_strcpy(char *s1, char *s2);
char	*ft_strncat(char *dest, const char *src, unsigned int nb);
char	*get_next_line(int fd);
char	*ft_realloc(char *str, int xtrsize);
char	*ft_strdup(const char *s1);
int		ft_strlen(const char *s);
char	*package(char **chyata, char *buf, char *readbuf);

#endif
