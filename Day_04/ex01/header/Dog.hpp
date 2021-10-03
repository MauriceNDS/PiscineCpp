/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:49:11 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 16:15:45 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:

		Brain*	_brain;

	public:

		Dog( void );
		Dog( Dog const & cpy );
		~Dog( void );

		Dog&	operator=( Dog const & rhs );

		Brain*	getBrain( void ) const;
		void	makeSound ( void ) const;

};

#endif