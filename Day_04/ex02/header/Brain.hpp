/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:43:11 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 15:53:48 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	
	public:

		std::string	ideas[100];
		Brain( void );
		Brain( Brain const & cpy );
		~Brain( void );

		Brain&	operator=( Brain const & rhs );
		
};

#endif