/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:59:15 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/28 08:20:23 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main( int argc, char *argv[] ) {

	Karen	karen;

	if ( argc != 2)
		return 1;

	karen.complain( argv[1] );
	
	return 0;
}