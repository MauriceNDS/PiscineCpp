/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:52:16 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 14:17:24 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>

# include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:

		PresidentialPardonForm( void );

		std::string		_target;

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & copy );
		~PresidentialPardonForm( void );

		PresidentialPardonForm&	operator=( PresidentialPardonForm const & rhs );

		std::string			getTarget( void ) const;

		void		execute( Bureaucrat const & executor ) const;

};

#endif