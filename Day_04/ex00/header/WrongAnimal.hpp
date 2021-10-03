/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:33:24 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 15:36:39 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {

	protected:

		std::string	type;

	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & cpy );
		virtual ~WrongAnimal( void );

		WrongAnimal&	operator=( WrongAnimal const & rhs );

		void	makeSound ( void ) const;
		std::string		getType( void ) const;

};

#endif