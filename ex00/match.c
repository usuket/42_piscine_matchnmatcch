/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 12:05:28 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/21 14:41:02 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	match(char *s1, char *s2)
{
	int s1_len;
	int s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);

	if(s1_len != s2_len)
		return(0);

	int i = 0;
	while(i < s1_len){
		if(s2[i] != '*' && s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
