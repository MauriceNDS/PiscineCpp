/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:35:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 17:01:45 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main( void ) {
    Intern      nobody;
    Bureaucrat  mike( "Mike", 3 );
    Form*       form;

    form = nobody.makeForm( "", "" );
    if ( form != nullptr ) {
        mike.signForm( *form );
        mike.executeForm( *form );
        delete form;
    }

    form = nobody.makeForm( "Robotomy request", "Jhon" );
    if ( form != nullptr ) {
        mike.signForm( *form );
        mike.executeForm( *form );
        delete form;
    }

    form = nobody.makeForm( "Presidential Pardon", "Macron" );
    if ( form != nullptr ) {
        mike.signForm( *form );
        mike.executeForm( *form );
        delete form;
    }

    form = nobody.makeForm( "Shrubbery Creation", "garden" );
    if ( form != nullptr ) {
        mike.signForm( *form );
        mike.executeForm( *form );
        delete form;
    }
	
    return (0);
}