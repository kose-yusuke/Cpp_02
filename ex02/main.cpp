/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:37 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/26 21:03:26 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "インクリメント/min-max:" << std::endl;    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;

    Fixed c(10);
    Fixed d(20);
    std::cout << Fixed::max( c, d ) << std::endl;
    std::cout << Fixed::min( c, d ) << std::endl;

    Fixed e(30);
    Fixed f(40);
    std::cout << Fixed::max( e, f ) << std::endl;
    std::cout << Fixed::min( e, f ) << std::endl;

    std::cout << "等号不等号のテスト:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;

    std::cout << "四則演算のテスト:" << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;

    return 0;
}