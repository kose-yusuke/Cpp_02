/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:37 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/26 16:43:00 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    Fixed d;
    d.setRawBits(42);
    std::cout << "d (set to 42): " << d.getRawBits() << std::endl;

    Fixed e(d);
    std::cout << "e (copy of d): " << e.getRawBits() << std::endl;

    Fixed f;
    f = d;
    std::cout << "f (assigned from d): " << f.getRawBits() << std::endl;
    return 0;
}