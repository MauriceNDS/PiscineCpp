/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:35:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 11:20:12 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void ) {

	Bureaucrat	jack( "Jack", 78 );
	Bureaucrat	bryan( "Bryan", 42 );
	Form		form( "R&D contract", 50, 50 );

	std::cout << jack << std::endl;
	std::cout << bryan << std::endl;
	std::cout << form << std::endl;

	jack.signForm( form );
	
	std::cout << form << std::endl;

	bryan.signForm( form );
	
	std::cout << form << std::endl;
	
	return 0;
}