/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:51:26 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 14:17:31 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>

# include "Form.hpp"

class ShrubberyCreationForm : public Form {

	private:

		ShrubberyCreationForm( void );

		std::string		_target;

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & copy );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const & rhs );

		std::string			getTarget( void ) const;

		void		execute( Bureaucrat const & executor ) const;

};

#endif