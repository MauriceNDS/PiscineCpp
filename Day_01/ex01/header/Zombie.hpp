/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:37:55 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 08:04:44 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Zombie {

    private:
        string  _name;

    public:
        Zombie( void );
        Zombie( string str );
        ~Zombie( void );

        void    setName( string name );
        void    announce( void );
        
};

Zombie* zombieHorde( int N, string name );