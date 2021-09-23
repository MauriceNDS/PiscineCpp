/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 07:43:08 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/22 08:10:13 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( int argc, char *argv[] ) {

	if ( argc == 1 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {

		for ( int i = 1; i < argc; i++ ) {

			for ( int j = 0; j < (int)strlen(argv[i]); j++ )
				argv[i][j] = toupper(argv[i][j]);
			
			std::cout << argv[i];
		}

		std::cout << std::endl;
	}

	return 0;
}