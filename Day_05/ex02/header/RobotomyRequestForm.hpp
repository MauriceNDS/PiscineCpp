/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:38:10 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/05 14:17:27 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>

# include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:

		RobotomyRequestForm( void );

		std::string		_target;

	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & copy );
		~RobotomyRequestForm( void );

		RobotomyRequestForm&	operator=( RobotomyRequestForm const & rhs );

		std::string			getTarget( void ) const;

		void		execute( Bureaucrat const & executor ) const;

};

#endif