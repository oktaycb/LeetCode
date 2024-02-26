/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 01:10:03 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/27 01:53:25 by ocubukcu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	reverse(int x)
{
	int	a;

	a = 0;
	while (x != 0)
	{
		a = a * 10 + x % 10;
		x /= 10;
	}
	return ((a < -2147483648 || a > __INT_MAX__) ? 0 : a);
}
