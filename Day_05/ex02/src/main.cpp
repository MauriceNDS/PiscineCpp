/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:35:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 15:25:21 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

int main( void ) {
    Bureaucrat mike( "Mike", 10 );
    Bureaucrat Paul( "Paul", 150 );
    Form* test = new ShrubberyCreationForm( "testo" );

    mike.executeForm( *test );
    mike.signForm( *test );
    Paul.executeForm( *test );
    mike.executeForm( *test );
	std::cout << std::endl;
	
	delete test;

	test = new RobotomyRequestForm( "testo" );

	mike.executeForm( *test );
    mike.signForm( *test );
    Paul.executeForm( *test );
    mike.executeForm( *test );
	std::cout << std::endl;

	delete test;

	test = new PresidentialPardonForm( "testo" );

	mike.executeForm( *test );
    mike.signForm( *test );
    Paul.executeForm( *test );
    mike.executeForm( *test );

	delete test;
	
    return (0);
}