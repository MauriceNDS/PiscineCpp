/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:50:51 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 16:15:40 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	
	private:

		Brain*	_brain;

	public:

		Cat( void );
		Cat( Cat const & cpy );
		~Cat( void );

		Cat&	operator=( Cat const & rhs );

		Brain*	getBrain( void ) const;
		void	makeSound ( void ) const;

};

#endif