/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:27:05 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 16:45:45 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {

	private:

		static std::string const	_forms[3];

	public:

		Intern( void );
		Intern( Intern const & copy );
		~Intern( void );

		Intern&	operator=( Intern const & rhs );

		Form*	makeForm( std::string form, std::string const target ) const;

};

std::string		strToLower( std::string str );

#endif