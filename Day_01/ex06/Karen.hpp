/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:59:06 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/28 07:56:41 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Karen {

	private:
		void	(Karen::*_func[90])(void);

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:

		Karen( void );

		void	complain( std::string level );

};