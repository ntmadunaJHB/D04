/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:43:47 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/15 15:44:45 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;
	res = 1;

	if(nb == 0)
	{
		return(1);
	}
	else
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return(res);
	}
}


