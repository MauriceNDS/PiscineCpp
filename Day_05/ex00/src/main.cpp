/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:35:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 08:57:06 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"

int		main( void ) {

	Bureaucrat	jack( "Jack", 148 );
	Bureaucrat	bob( "Bob", 3 );

	std::cout << jack << std::endl;
	std::cout << bob << std::endl;

	jack.gradeDec();
	jack.gradeDec();
	jack.gradeDec();
	jack.gradeDec();
	bob.gradeInc();
	bob.gradeInc();
	bob.gradeInc();
	bob.gradeInc();

	std::cout << jack << std::endl;
	std::cout << bob << std::endl;

	try {
		Bureaucrat	jackson( "Jackson", 151 );
		Bureaucrat	bobson( "Bobson", 0 );
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}