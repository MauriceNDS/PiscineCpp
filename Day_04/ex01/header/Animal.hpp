/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:29:22 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 15:28:03 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {

	protected:

		std::string	type;

	public:

		Animal( void );
		Animal( Animal const & cpy );
		virtual ~Animal( void );

		Animal&	operator=( Animal const & rhs );

		virtual void	makeSound ( void ) const;
		std::string		getType( void ) const;

};

#endif