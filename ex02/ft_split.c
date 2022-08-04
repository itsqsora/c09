/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:36:10 by mac               #+#    #+#             */
/*   Updated: 2022/08/04 13:05:54 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long	get_word_count(char *str, char *charset)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			++cnt;
			while (*str && !is_in_charset(*str, charset))
				++str;
		}
		++str;
	}
	return (cnt);
}

char		**ft_split(char *str, char *charset)
{
	char		**ret;
	long long	idx;
	char		*from;

	ret = (char**)malloc(sizeof(char*) * get_word_count(str, charset) + 1);
	idx = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			from = str;
			while (*str && !is_in_charset(*str, charset))
				++str;
			ret[idx] = (char*)malloc(str - from + 1);
			ft_strcpy(ret[idx++], from, str);
		}
		++str;
	}
	ret[idx] = 0;
	return (ret);
}
int	main(void)
{
	printf("%s\n", ft_split("ixlovexking", "x"));
	return (0);
}
