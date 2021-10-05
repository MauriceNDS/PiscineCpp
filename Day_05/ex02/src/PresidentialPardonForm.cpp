/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:11:19 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 14:54:46 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "PresidentialPardonForm", 25, 5 ) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & copy ) : Form( copy ) {
	this->_target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string				PresidentialPardonForm::getTarget( void ) const {
	return this->_target;
}

void					PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if ( !this->getSigned() )
		throw Form::FormNotSignedException();
	else if ( executor.getGrade() > this->getGToExecute() )
		throw Form::GradeTooLowException();
	else
		std::cout << this->_target << " was forgiven by Zafod Beeblebrox" << std::endl;
}