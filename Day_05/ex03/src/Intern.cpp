/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:58:32 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 17:00:02 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Intern.hpp"

std::string const	Intern::_forms[3] = { "presidential pardon", "robotomy request", "shrubbery creation" };

Intern::Intern( void ) {}

Intern::Intern( Intern const & copy ) {
	( void ) copy;
}

Intern::~Intern( void ) {}

Intern&	Intern::operator=( Intern const & rhs ) {
	( void ) rhs;
	return *this;
}

Form*	Intern::makeForm( std::string form, std::string const target ) const {
	Form*	result;
	int		i = 0;

	form = strToLower( form );
	while ( i < 3 && form != Intern::_forms[i] )
		i++;

	switch ( i ) {
		case 0 : result = new PresidentialPardonForm( target ); break;
		case 1 : result = new RobotomyRequestForm( target ); break;
		case 2 : result = new ShrubberyCreationForm( target ); break;
		default : result = nullptr;
	}

	if ( result == nullptr )
		std::cout << "Unknown form request" << std::endl;
	else
		std::cout << "Intern creates " << Intern::_forms[i] << std::endl;
	return result;
}

std::string		strToLower( std::string str ) {
	for ( size_t i = 0; i < str.length(); i++ )
		str[i] = std::tolower( str[i] );
	return str;
}