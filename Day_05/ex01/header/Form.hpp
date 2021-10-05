/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:29 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 11:12:12 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

		Form( void );
		
		std::string	const	_name;
		size_t const		_gToExecute;
		size_t const		_gToSign;
		bool				_signed;

	public:

		Form( std::string name, size_t toSign, size_t toExecute );
		Form( Form const & copy );
		~Form( void );

		Form&	operator=( Form const & rhs );

		std::string const	getName( void ) const;
		size_t				getGToExecute( void ) const;
		size_t				getGToSign( void ) const;
		bool				getSigned( void ) const;

		Form&				beSigned( Bureaucrat br );

		class GradeTooHighException : public std::exception {

			public:

				virtual char const *	what( void ) const throw();

		};

		class GradeTooLowException : public std::exception {

			public:

				virtual char const *	what( void ) const throw();

		};

};

std::ostream&	operator<<( std::ostream& os, Form const & form );

#endif