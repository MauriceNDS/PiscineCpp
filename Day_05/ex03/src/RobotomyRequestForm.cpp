/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:10:53 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 14:54:57 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "RobotomyRequestForm", 72, 45 ) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & copy ) : Form( copy ) {
	this->_target = copy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string				RobotomyRequestForm::getTarget( void ) const {
	return this->_target;
}

void					RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if ( !this->getSigned() )
		throw Form::FormNotSignedException();
	else if ( executor.getGrade() > this->getGToExecute() )
		throw Form::GradeTooLowException();
	else {
		srand( time( NULL ) );

		if ( rand() % 2 )
			std::cout << "Bzzzzzzzz... " << this->_target << " was successfully robotomized" << std::endl;
		else
			std::cout << "Bzzzzzzzz... " << this->_target << " has failed to robotomized" << std::endl;
	}
}