/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:59:15 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 15:35:39 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main( void ) {

	Karen	karen;

	std::cout << "DEBUG : ";
	karen.complain( "DEBUG" );

	std::cout << "INFO : ";
	karen.complain( "INFO" );

	std::cout << "WARNING : ";
	karen.complain( "WARNING : " );

	std::cout << "ERROR : ";
	karen.complain( "ERROR" );
	
	return 0;
}