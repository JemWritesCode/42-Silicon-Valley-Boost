/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:20:27 by jcope             #+#    #+#             */
/*   Updated: 2018/09/17 22:59:11 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strdup(const char *s1);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strchr(const char *s, int c);

int		ft_isdigit(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

void	*ft_memset(void *b, int c, size_t len);

#endif
