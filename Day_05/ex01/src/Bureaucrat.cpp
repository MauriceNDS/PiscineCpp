/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:19:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/06 09:35:02 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Unknown" ) {
	this->_grade = 150;
}

Bureaucrat::Bureaucrat( std::string const name, size_t grade ) : _name( name ) {
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy ) : _name( copy.getName() ) {
	*this = copy;
}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const & rhs ) {
	this->_grade = rhs._grade;
	return *this;
}

std::string const	Bureaucrat::getName( void ) const {
	return this->_name;
}

size_t				Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void				Bureaucrat::gradeInc( void ) {
	if ( this->_grade == 1 )
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;	
}

void				Bureaucrat::gradeDec( void ) {
	if ( this->_grade == 150 )
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;	
}

void				Bureaucrat::signForm( Form& form ) {
	try {
		form = form.beSigned( *this );
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}	
	catch ( std::exception& e ) {
		std::cout << this->_name << " cannot sign because he has no rights to do it" << std::endl;
	}
}

char const *	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return "Grade is too hight";
}

char const *	Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "Grade is too low";
}

std::ostream& operator<<( std::ostream& os, Bureaucrat const & br ) {
	os << br.getName() << ", bureaucrat grade " << br.getGrade();
	return os;
}