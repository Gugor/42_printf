/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_set_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:10:10 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 18:16:25 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
	//Test 1
	printf("=== Test %d === \n", 1);
	ft_printf("This is a %% and this %x an hex, and this a simple character %c and \"%s\" and this a pointer (%p)", 1152921504585159826, 'c', "this is a string", &tmp );
	printf("\n");
	//Test 2 
	printf("=== Test %d === \n", 2);
	ft_printf(" %c %c %c ", '0', 0, '1');
	printf("\n");
	printf(" %c %c %c ", '0', 0, '1');
	printf("\n");
	//Test 3
	printf("=== Test %d === \n", 3);
	ft_printf(" %x ", 0);
	printf("\n");
	printf(" %x ", 0);
	printf("\n");
	return (0);
}
