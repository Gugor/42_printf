/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_set_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:10:10 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 19:32:42 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int main(void)
{
	//Test 1: check length
	//ft_printf("Hola %c %s-%d.... .\n", 'c', "primo", 1000);
	//printf("\n............................................\n");
	//ft_printf("Perro%d %c %c %d", 1, 'a', 'a', 1000);
	//ft_printf("%d sdfg%s%c %iasdfasdf  .. ", 1, "cabaillot", 'a', 1000);
	//ft_printf("Perro%u %c %c %d", 1, 'a', 'a', 1000);
	//ft_gethex(11897728);
	int tmp;
	tmp = -152345;
	ft_printf("%p\n", &tmp);
	printf("%p", &tmp);
	return (0);
}
