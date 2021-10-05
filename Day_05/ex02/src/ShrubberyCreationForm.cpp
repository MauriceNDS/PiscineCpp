/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:56:01 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 14:56:36 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "ShrubberyCreationForm", 145, 137 ) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & copy ) : Form( copy ) {
	this->_target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string				ShrubberyCreationForm::getTarget( void ) const {
	return this->_target;
}

void					ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if ( !this->getSigned() )
		throw Form::FormNotSignedException();
	else if ( executor.getGrade() > this->getGToExecute() )
		throw Form::GradeTooLowException();
	else {
		std::ofstream	ofs( this->_target + "_shrubbery" );

		ofs << "     /\\     " << std::endl << "    /  \\    " << std::endl << "   /    \\   ";
		ofs << std::endl << "   ______   " << std::endl << "     ||     " << std::endl;
		ofs << std::endl;

		ofs << "     /\\     " << std::endl << "    /  \\    " << std::endl << "   /    \\   ";
		ofs << std::endl << "   ______   " << std::endl << "     ||     " << std::endl;
		ofs << std::endl;

		ofs << "     /\\     " << std::endl << "    /  \\    " << std::endl << "   /    \\   ";
		ofs << std::endl << "   ______   " << std::endl << "     ||     " << std::endl;
		
		ofs.close();
	}
}