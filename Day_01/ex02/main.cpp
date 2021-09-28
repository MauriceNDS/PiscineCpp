/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:12:41 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 08:19:45 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int		main( void ) {

	string	str = "HI THIS IS BRAIN";
	
	string*	stringPtr = &str;
	string&	stringRef = str;

	cout << "&str : " << &str << endl;
	cout << "stringPtr : " << stringPtr << endl;
	cout << "&stringRef : " << &stringRef << endl;

	cout << endl;

	cout << "*stringPtr : " << *stringPtr << endl;
	cout << "stringRef : " << stringRef << endl;

	return 0;
}