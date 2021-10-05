/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:23:46 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 11:12:04 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string name, size_t toSign, size_t toExecute ) : _name( name ),
_gToExecute( toExecute ), _gToSign( toSign ), _signed( false ) {}

Form::Form( Form const & copy ) : _name( copy._name ), _gToExecute( copy._gToExecute ),
_gToSign( copy._gToSign ), _signed( copy._signed ) {}

Form::~Form( void ) {}

Form&	Form::operator=( Form const & rhs ) {
	this->_signed = rhs._signed;
	return *this;
}

std::string const	Form::getName( void ) const {
	return this->_name;
}

size_t				Form::getGToExecute( void ) const {
	return this->_gToExecute;
}

size_t				Form::getGToSign( void ) const {
	return this->_gToSign;
}

bool				Form::getSigned( void ) const {
	return this->_signed;
}

Form&				Form::beSigned( Bureaucrat br ) {
	if ( br.getGrade() > this->_gToSign ) {
		throw Form::GradeTooLowException();
	}
	else {
		this->_signed = true;
		return *this;
	}
}

char const *	Form::GradeTooHighException::what( void ) const throw() {
	return "Grade is too hight";
}

char const *	Form::GradeTooLowException::what( void ) const throw() {
	return "Grade is too low";
}

std::ostream&	operator<<( std::ostream& os, Form const & form ) {
	os << "FormName: " << form.getName() << " | Grade to sign: " << form.getGToSign();
	os << " | Grade to execute: " << form.getGToExecute() << " | Signed: ";
	os << form.getSigned();
	return os;
}