/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:05:43 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 14:44:25 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class Form;

class Bureaucrat {

	private:

		std::string const	_name;
		size_t				_grade;

	public:

		Bureaucrat( void );
		Bureaucrat( std::string const name, size_t grade );
		Bureaucrat( Bureaucrat const & copy );
		~Bureaucrat( void );

		Bureaucrat& operator=( Bureaucrat const & rhs );

		std::string const	getName( void ) const;
		size_t				getGrade( void ) const;

		void				gradeInc( void );
		void				gradeDec( void );
		void				signForm( Form& form );
		void				executeForm( Form const & form );

		class GradeTooHighException : public std::exception {

			public:

				virtual char const *	what( void ) const throw();

		};

		class GradeTooLowException : public std::exception {

			public:

				virtual char const *	what( void ) const throw();

		};
		
};

std::ostream& operator<<( std::ostream& os, Bureaucrat const & br );

#endif