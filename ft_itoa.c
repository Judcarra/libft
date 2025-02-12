/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:41:59 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/12 13:00:43 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_num_len(int n)
{
	long		nb;
	int			len;

	nb = n;
	len = 0;
	if (nb <= 0)
		return (1);
	else
		return (0);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static	void	ft_fill_str(char *str, long nb, int len, int sign)
{
	if (sign == -1)
		str[0] = '-';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
}

static	char	*ft_handle_zero(void)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static	char	*ft_allocate_str(int len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	nb;

	if (n == 0)
		return (ft_handle_zero());
	sign = 1;
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_num_len(n);
	str = ft_allocate_str(len);
	if (str == NULL)
		return (NULL);
	nb = n;
	if (nb < 0)
		nb = -nb;
	str[len] = '\0';
	ft_fill_str(str, nb, len, sign);
	return (str);
}
